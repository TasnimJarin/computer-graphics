#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glPointSize(5.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 1.0f); // Red  // x, y
	glVertex2f(0.5f,0.5f);
	glVertex2f(-0.5f,-0.5f);
	glVertex2f(0.5f,-0.5f);
	glVertex2f(-0.5f,0.5f);
	glVertex2f(0.0f,0.5f);
	glVertex2f(0.5f,0.0f);
	glVertex2f(0.0f,-0.5f);
	glVertex2f(-0.5f,0.0f);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(0.1f,0.1f);
	glVertex2f(0.5f,0.1f);
	glVertex2f(0.3f,0.3f);


	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f,1.0f,0.0f);
    glVertex2f(0.1f,0.1f);
	glVertex2f(0.5f,0.1f);
	glColor3f(0.0f,1.0f,1.0f);
	glVertex2f(0.5f,-0.2f);
	glVertex2f(0.1f,-0.2f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(0.4f,-0.2f);
	glVertex2f(0.1f,-0.3f);
	glColor3f(0.0f,1.0f,1.0f);
	glVertex2f(0.1f,-0.3f);
	glVertex2f(0.4f,-0.2f);
    glEnd();




	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
