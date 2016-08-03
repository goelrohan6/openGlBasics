#include<stdio.h>
#include<GL/gl.h>
#include<GL/glut.h>


void Draw(void){

	glClearColor(1,0,0,0); // (R,G,B,Intensity)
	glClear(GL_COLOR_BUFFER_BIT); // stores the color in variable
	glFlush();
}

int main(int argc, char **argv){

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(200,100);
	glutInitWindowPosition(200,200);
	glutCreateWindow("Hello World");
	glutDisplayFunc(Draw); // glutDisplayFunc() is used to call the function Draw

	glutMainLoop();

	return 0;
}