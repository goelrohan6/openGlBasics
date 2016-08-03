#include<stdio.h>
#include<GL/gl.h>
#include<GL/glut.h>

// This a basic Hello World program in which we create a basic window
int main(int argc, char **argv){

	glutInit(&argc, argv); 
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
	glutInitWindowSize(200,100); // Size of the Window Produced
	glutInitWindowPosition(400,400); //Position of the window produced on screen
	glutCreateWindow("Hello World"); // Name of the window produced 
	glFlush();
	glutMainLoop(); // Keep the window Running

	return 0;
}