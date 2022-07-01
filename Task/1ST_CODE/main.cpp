#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



	//Draw Point
	glPointSize(5.0);

        glBegin(GL_TRIANGLES);
            glColor3f(0.0f, 0.0f, 1.0f);
            glVertex2f(0.6f, -0.6f);
            glVertex2f(0.1f, -0.6f);
            glVertex2f(0.35f, -0.2f);
        glEnd();

        glBegin(GL_TRIANGLES);
            glColor3f(1.0f, 0.0f, 0.0f);
            glVertex2f(0.3f, -0.4f);
            glColor3f(0.0f, 1.0f, 0.0f);
            glVertex2f(0.5f, -0.8f);
            glColor3f(1.0f, 0.0f, 1.0f);
            glVertex2f(0.8f, -0.4f);
        glEnd();


        glBegin(GL_POLYGON);

        glColor3f(1.0f, 1.0f, 0.0f);

        glVertex2f(0.30f, 0.5f);
        glVertex2f(0.50f, 0.5f);
        glVertex2f(0.6f, 0.3f);
        glVertex2f(0.50f, 0.1f);
        glVertex2f(0.30f, 0.1f);
        glVertex2f(0.19f, 0.3f);

        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f,0.0f,0.0f);
        glVertex2f(-0.2f,0.5f);
        glVertex2f(-0.6f,0.5f);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.6f,0.1f);
        glVertex2f(-0.2f,0.1f);


        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.0f,1.0f,0.0f);
        glVertex2f(-0.2f,-0.5f);
        glVertex2f(-0.7f,-0.5f);
        glVertex2f(-0.7f,-0.1f);
        glVertex2f(-0.2f,-0.1f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(1.0f,1.0f,1.0f);
        glVertex2f(-0.9f,-0.7f);
        glColor3f(0.0f,0.0f,0.0f);
        glVertex2f(-0.5f,-0.7f);
        glColor3f(1.0f,1.0f,1.0f);
        glVertex2f(-0.5f,-0.3f);
        glColor3f(0.0f,0.0f,0.0f);
        glVertex2f(-0.9f,-0.3f);


        glEnd();





	glFlush();  // Render now
}



int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
