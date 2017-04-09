//============================================================================
// Name        : triangulo.cpp
// Author      : UPN
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <GL/glut.h>
using namespace std;


void remodelar(int w, int h){
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, w, 0, h, -1, 1);
	glScalef(1, -1, 1);
	glTranslatef(0, -h, 0);
}

void mostrar(){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
		glColor3f(0.0, 0.0, 1.0); //azul
		glVertex2i(0,0);
		glColor3f(0.0, 1.0, 0.0); //verde
		glVertex2i(200,200);
		glColor3f(1.0, 0.0, 0.0); //rojo
		glVertex2i(20,200);
	glEnd();
	glFlush(); // Unico buffer, asi que se necesita un flush
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutCreateWindow("simple triangulo");
	glutDisplayFunc(mostrar);
	glutReshapeFunc(remodelar);
	glutMainLoop();
	return 0;
}
