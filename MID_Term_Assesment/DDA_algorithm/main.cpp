// Sample Line Incremental (DDA) Algorithm
#include<windows.h>
#include<iostream>
#include<math.h>
#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

using namespace std;

int X1, Y1, X2, Y2, r ,cx, cy;



void DDA(void)
{

    double dx=(X2-X1),dy=(Y2-Y1),l;
    float xInc,yInc,x=X1,y=Y1;
      int ds=2*dy - dx;


    if(abs(dx)>abs(dy))
        l=(abs(dx));
    else
        l=(abs(dy));

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);

    glVertex2d(x,y);

    for(int i=0; i<l; i++)
    {
        if(ds>0)
        {
            int m=2*(dy-dx);
            x = x+1;
            y = y+1;
            glVertex2d(round(x), round(y));
            ds=ds+m;

        }
        else if(ds<=0)
        {
            int m=2*dy;

            x=x+1;
            y=y;
            glVertex2d(round(x), round(y));
            ds=ds+m;
        }

    }
    glEnd();

    glFlush();

}

void myInit (void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glColor3f(1.0f, 1.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100.0, 640.0,-100.0, 480.0);

}




int main(int argc, char** argv)
{


    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("DDA");

    cout<<"Enter an initial points:\t"<<endl;
    cin>>X1;
    cin>>Y1;
    cout<<"Enter the final points:\t"<<endl;
    cin>>X2;
    cin>>Y2;
    glutDisplayFunc(DDA);
    myInit ();
    glutMainLoop();

}

