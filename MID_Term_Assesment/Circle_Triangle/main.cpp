#include <windows.h>
#include <GL/glut.h>


void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f,0.0f,0.6f);
    glVertex2f(0.0f, 0.0f);

     glVertex2f(0.5f, 0.0f);
    glVertex2f(0.49f, 0.1f);
    glVertex2f(0.45f, 0.2f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.2f, 0.45f);
    glVertex2f(0.1f, 0.49f);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(-0.1f, 0.49f);
    glVertex2f(-0.2f, 0.46f);
    glVertex2f(-0.3f, 0.4f);
    glVertex2f(-0.4f, 0.3f);
    glVertex2f(-0.45f, 0.2f);
    glVertex2f(-0.49f, 0.1f);
    glVertex2f(-0.5f, 0.0f);
    glVertex2f(-0.49f, -0.1f);
    glVertex2f(-0.45f, -0.2f);
    glVertex2f(-0.4f, -0.3f);
    glVertex2f(-0.3f, -0.4f);
    glVertex2f(-0.2f, -0.46f);
    glVertex2f(-0.1f, -0.49f);
    glVertex2f(-0.0f, -0.5f);
    glVertex2f(0.1f, -0.49f);
    glVertex2f(0.2f, -0.45f);
    glVertex2f(0.3f, -0.4f);
    glVertex2f(0.4f, -0.3f);
    glVertex2f(0.45f, -0.2f);
    glVertex2f(0.49f, -0.1f);
    glVertex2f(0.5f, -0.0f);
       glEnd();
     glFlush();  // Render now
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("Triangle_Fan");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

