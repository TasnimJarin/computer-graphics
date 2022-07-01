#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

float carmove=0.0f;

float carmove1=0.0f;

float _move4=0.0f;

float _rain = 0.0;





void road(){

 //road
    glColor3ub(199, 200, 197  );
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(0,600);
    glVertex2i(1500,600);
    glVertex2i(1500,0);


//road line
    glColor3ub(221, 251, 225);
    glBegin(GL_QUADS);
    glVertex2i(0,290);
    glVertex2i(0,310);
    glVertex2i(1500,310);
    glVertex2i(1500,290);

   glEnd();
}



//tree

void tree()
{

glPushMatrix();
glTranslatef(30,590,0);
glScalef(0.33,0.2,0);

//root
    glColor3ub(93, 35, 2 );
    glBegin(GL_QUADS);
    glVertex2i(550,50);
    glVertex2i(570,100);
    glVertex2i(670,100);
    glVertex2i(700,50);
//root
 glColor3ub(93, 35, 2 );
    glBegin(GL_QUADS);
    glVertex2i(570,100);
    glVertex2i(590,150);
    glVertex2i(640,150);
    glVertex2i(670,100);

//body
   glBegin(GL_QUADS);
    glVertex2i(590,150);
    glVertex2i(590,450);
    glVertex2i(640,450);
    glVertex2i(640,150);

    //leaf
 glColor3ub(107, 223, 8  );
    glBegin(GL_QUADS);
    glVertex2i(450,450);
    glVertex2i(490,500);
    glVertex2i(760,500);
    glVertex2i(800,450);


     glColor3ub(107, 223, 8  );
    glBegin(GL_QUADS);
    glVertex2i(475,500);
    glVertex2i(510,550);
    glVertex2i(740,550);
    glVertex2i(775,500);


     glColor3ub(107, 223, 8  );
    glBegin(GL_QUADS);
    glVertex2i(475,550);
    glVertex2i(510,600);
    glVertex2i(740,600);
    glVertex2i(775,550);

     glColor3ub(107, 223, 8  );
    glBegin(GL_QUADS);
    glVertex2i(500,600);
    glVertex2i(547,650);
    glVertex2i(697,650);
    glVertex2i(750,600);

    glColor3ub(107, 223, 8  );
    glBegin(GL_QUADS);
    glVertex2i(535,650);
    glVertex2i(575,700);
    glVertex2i(675,700);
    glVertex2i(715,650);

     glEnd();

    glColor3ub(107, 223, 8  );
    glBegin(GL_POLYGON);
    glVertex2i(550,700);
    glVertex2i(625,800);
    glVertex2i(700,700);

 glEnd();

glPopMatrix();



}

void tree2(){

glPushMatrix();

glTranslatef(150,0,0);

tree();

glPopMatrix();


}

void tree3(){

glPushMatrix();

glTranslatef(1000,0,0);

tree();

glPopMatrix();

}


void grass(){
    //grass

glColor3ub(20, 247, 56 );
    glBegin(GL_QUADS);
    glVertex2i(0,600);
    glVertex2i(0,700);
    glVertex2i(1500,700);
    glVertex2i(1500,600);
       glEnd();

}

void daysky(){
    //sky

glColor3ub(110, 230, 255 );
    glBegin(GL_QUADS);
    glVertex2i(0,650);
    glVertex2i(0,900);
    glVertex2i(1500,900);
    glVertex2i(1500,650);
       glEnd();
}

void nightsky(){
    //sky

glColor3ub(0,0,0 );
    glBegin(GL_QUADS);
    glVertex2i(0,650);
    glVertex2i(0,900);
    glVertex2i(1500,900);
    glVertex2i(1500,650);
       glEnd();
}





/////////////////////////SUN /////////
void sun()
{

    glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(255,255,0);

float pi=3.1416;

float A=(i*2*pi)/400;

float r=60;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(1000+x,825+y);


}
glEnd();


}

void moon()
{

    glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(239, 241, 147);


float pi=3.1416;

float A=(i*2*pi)/400;

float r=65;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(1200+x,825+y);


}
glEnd();
//


    glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(0, 0, 26 );


float pi=3.1416;

float A=(i*2*pi)/400;

float r=65;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(1245+x,825+y);


}
glEnd();



}





//clouds

void cloud()
 {

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

glTranslatef(_move4, 0.0f, 0.0f);

//1st cloud
glTranslatef(0, 400, 0.0f);
glScalef(0.5,0.5,0);

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(234, 236, 236   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(200+x,800+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(234, 236, 236   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,850+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(234, 236, 236 );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,750+y);


}
glEnd();



glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(234, 236, 236  );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,800+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(234, 236, 236  );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=60;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,875+y);


}
glEnd();



//2nd cloud
glTranslatef(900, 300, 0.0f);
glScalef(-0.7,0.7,0);


glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(200+x,800+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,850+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,775+y);


}
glEnd();



glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,800+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);


for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232  );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=60;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,875+y);


}
glEnd();


//3rd cloud
glTranslatef(1200, 100, 0.0f);
glScalef(0.9,0.9,0);

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(200+x,800+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,850+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(232, 232, 232  );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,775+y);


}
glEnd();



glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,800+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=60;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,875+y);


}
glEnd();







glPopMatrix();

}





void home()
{

glPushMatrix();

glTranslatef(0,585,0);
glScalef(0.5,0.3,0);


//building
    glColor3ub(255,255,0);
    glBegin(GL_QUADS);
    glVertex2i(100,50);
    glVertex2i(100,750);
    glVertex2i(400,750);
    glVertex2i(400,50);

//door
    glColor3ub(0,0,0 );
    glBegin(GL_QUADS);
    glVertex2i(200,50);
    glVertex2i(200,300);
    glVertex2i(300,300);
    glVertex2i(300,50);


//window
    glColor3ub(0,0,0  );
    glBegin(GL_QUADS);
    glVertex2i(125,350);
    glVertex2i(125,400);
    glVertex2i(225,400);
    glVertex2i(225,350);

glColor3ub(0,0,0 );
    glBegin(GL_QUADS);
    glVertex2i(275,350);
    glVertex2i(275,400);
    glVertex2i(375,400);
    glVertex2i(375,350);


     glColor3ub(0,0,0  );
    glBegin(GL_QUADS);
    glVertex2i(125,450);
    glVertex2i(125,500);
    glVertex2i(225,500);
    glVertex2i(225,450);

glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex2i(275,450);
    glVertex2i(275,500);
    glVertex2i(375,500);
    glVertex2i(375,450);


     glColor3ub(0,0,0   );
    glBegin(GL_QUADS);
    glVertex2i(125,550);
    glVertex2i(125,600);
    glVertex2i(225,600);
    glVertex2i(225,550);

glColor3ub(0,0,0 );
    glBegin(GL_QUADS);
    glVertex2i(275,550);
    glVertex2i(275,600);
    glVertex2i(375,600);
    glVertex2i(375,550);



         glColor3ub(0,0,0  );
    glBegin(GL_QUADS);
    glVertex2i(125,650);
    glVertex2i(125,700);
    glVertex2i(225,700);
    glVertex2i(225,650);

glColor3ub(0,0,0 );
    glBegin(GL_QUADS);
    glVertex2i(275,650);
    glVertex2i(275,700);
    glVertex2i(375,700);
    glVertex2i(375,650);



   glEnd();



glPopMatrix();
}





void home2()
{

   glPushMatrix();

   glTranslatef(1250,0,0);
   home();

   glEnd();



glPopMatrix();
}







void zebracrossing(){
    //crossing w
    glColor3ub(255, 255, 255  );
    glBegin(GL_QUADS);
    glVertex2i(550,0);
    glVertex2i(550,100);
    glVertex2i(800,100);
    glVertex2i(800,0);


  //crossing b

    glColor3ub(0,0,0  );
    glBegin(GL_QUADS);
    glVertex2i(550,100);
    glVertex2i(550,200);
    glVertex2i(800,200);
    glVertex2i(800,100);


     //crossing w
    glColor3ub(255, 255, 255  );
    glBegin(GL_QUADS);
    glVertex2i(550,200);
    glVertex2i(550,300);
    glVertex2i(800,300);
    glVertex2i(800,200);

     //crossing b

    glColor3ub(0,0,0  );
    glBegin(GL_QUADS);
    glVertex2i(550,300);
    glVertex2i(550,400);
    glVertex2i(800,400);
    glVertex2i(800,300);


   //crossing w
    glColor3ub(255, 255, 255  );
    glBegin(GL_QUADS);
    glVertex2i(550,400);
    glVertex2i(550,500);
    glVertex2i(800,500);
    glVertex2i(800,400);


 //crossing b

    glColor3ub(0,0,0  );
    glBegin(GL_QUADS);
    glVertex2i(550,500);
    glVertex2i(550,600);
    glVertex2i(800,600);
    glVertex2i(800,500);
       glEnd();
}

void light(){
//light stand

     glColor3ub(151, 78, 0   );
    glBegin(GL_QUADS);
    glVertex2i(660,300);
    glVertex2i(660,640);
    glVertex2i(690,640);
    glVertex2i(690,300);


//light box

     glColor3ub(54, 90, 92    );
    glBegin(GL_QUADS);
    glVertex2i(625,640);
    glVertex2i(625,860);
    glVertex2i(725,860);
    glVertex2i(725,640);


    //light yellow

     glColor3ub(233, 255, 0   );
    glBegin(GL_QUADS);
    glVertex2i(650,650);
    glVertex2i(650,700);
    glVertex2i(700,700);
    glVertex2i(700,650);

    //light red

     glColor3ub(255, 0, 0   );
    glBegin(GL_QUADS);
    glVertex2i(650,725);
    glVertex2i(650,775);
    glVertex2i(700,775);
    glVertex2i(700,725);

     //light Green

     glColor3ub(69, 188, 4  );
    glBegin(GL_QUADS);
    glVertex2i(650,800);
    glVertex2i(650,850);
    glVertex2i(700,850);
    glVertex2i(700,800);
       glEnd();
}


void rightcar(){
 //right car body
glMatrixMode(GL_MODELVIEW);
 glPushMatrix();
 glTranslatef(carmove1, 0.0f, 0.0f);

     glColor3ub(182, 24, 24    );
    glBegin(GL_QUADS);
    glVertex2i(900,400);
    glVertex2i(900,450);
    glVertex2i(1350,450);
    glVertex2i(1350,400);

    glEnd();




 //right car window

     glColor3ub(225, 255, 0     );
    glBegin(GL_QUADS);
    glVertex2i(1000,450);
    glVertex2i(1050,500);
    glVertex2i(1250,500);
    glVertex2i(1300,450);

    glEnd();

//1st back tire
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0, 0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=25;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(1050+x,400+y);

}

glEnd();

//2nd back tire
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0, 0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=25;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(1250+x,400+y);

}

glEnd();
glPopMatrix();

}


void leftcar(){
 //left car body

glMatrixMode(GL_MODELVIEW);
 glPushMatrix();
 glTranslatef(carmove, 0.0f, 0.0f);


     glColor3ub(204, 0, 203   );
    glBegin(GL_QUADS);
    glVertex2i(150,100);
    glVertex2i(150,150);
    glVertex2i(500,150);
    glVertex2i(500,100);

     //left car window

     glColor3ub(69, 8, 69   );
    glBegin(GL_QUADS);
    glVertex2i(150,150);
    glVertex2i(250,200);
    glVertex2i(350,200);
    glVertex2i(400,150);



glEnd();

//1st back tire
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0, 0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=25;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(200+x,100+y);

}

glEnd();


//2nd back tire
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0, 0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=25;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,100+y);

}

glEnd();

glPopMatrix();

}


//rain





void update1 (int value) {

if(carmove >(1500+500)  )

{
 carmove = -500;              //car

}


 carmove += 15;   //carspeed



glutPostRedisplay();
glutTimerFunc(20, update1, 0);
}




void update2 (int value) {

if(carmove1 <-(1500+500)  )

{
 carmove1 = 500;              //car

}


 carmove1 += -15;   //carspeed



glutPostRedisplay();
glutTimerFunc(20, update2, 0);
}

//opdate cloud

void update3 (int value) {

if(_move4 >(1500+700)  )

{
 _move4 = -500;              //cloud

}


 _move4 += 5;   //cloudspeed



glutPostRedisplay();
glutTimerFunc(30, update3, 0);
}






void display() {

  daysky();
  sun();
  grass();

  road();
  zebracrossing();
  leftcar();
  rightcar();
  cloud();
  home();
  home2();
  tree();
  tree2();
  tree3();
  light();


glFlush();
glutSwapBuffers();
}


void display2() {

  nightsky();
  moon();
  grass();
  road();
  zebracrossing();
  leftcar();
  rightcar();
  cloud();
  home2();
  home();
  tree();
  tree2();
  tree3();
  light();




glFlush();
glutSwapBuffers();
}



void handleKeypress(unsigned char key, int x, int y) {
    switch (key)

{
case 'd':
   glutDisplayFunc(display);
    break;
case 'n':
    glutDisplayFunc(display2);
    break;


glutPostRedisplay();
    }
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
glutInit(&argc, argv);                 // Initialize GLUT
glutCreateWindow("OpenGL Setup Test");
gluOrtho2D(0.0,1500,0.0,900); // Create a window with the given title
glutInitWindowSize(1024, 720);// Set the window's initial width & height
glutInitWindowPosition(100, 100);
glutDisplayFunc(display);// Register display callback handler for window re-paint
glutTimerFunc(10, update1, 0);
glutTimerFunc(10, update2, 0);
glutTimerFunc(10, update3, 0);
//glutFullScreen();
//glutSpecialFunc(SpecialInput);
glutKeyboardFunc(handleKeypress);
glutMainLoop();           // Enter the event-processing loop
return 0;
}
