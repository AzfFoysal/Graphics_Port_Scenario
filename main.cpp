#include<cstdio>
#include <GL/gl.h>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
GLfloat l = 0.0f;


GLfloat position1 = 0.0f;
GLfloat speed1 = 0.02f;

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.01f;

GLfloat position3 = 0.0f;
GLfloat speed3 = 0.02f;

void update(int value)
{

    if(position1 <-1.0)
        position1 = 1.0f;

    position1 -= speed1;

    glutPostRedisplay();

    if(position2 >1.0)
        position2 = -1.0f;

    position2 += speed2;

    glutPostRedisplay();

    if(position3 <1.0)
        position3 = -1.0f;

    position3 -= speed3;

    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}



void handleMouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)
    {
        speed3 += 0.02f;
    }

    if (button == GLUT_RIGHT_BUTTON)
    {
       speed3 -= 0.01f;
    }

    glutPostRedisplay();
}
void SpecialInput(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_UP:

        break;
    case GLUT_KEY_DOWN:

        break;
    case GLUT_KEY_LEFT:
        speed2=.02;
        break;
    case GLUT_KEY_RIGHT:
        speed2=.05;
        break;
    }
    glutPostRedisplay();
}


void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}


void night() {
  glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();


    //Sky
    glBegin(GL_QUADS);
    glColor3ub(36, 37, 37);
    glVertex2f(-1.0,-0.2);
    glVertex2f(-1.0,1.0);
    glVertex2f(1.0,1.0);
    glVertex2f(1.0,-0.2);
    glEnd();


    //Moon

    int i;

    GLfloat x=.4f;
    GLfloat y=.6f;
    GLfloat radius =.1f;
    int triangleAmount = 20;


    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 230, 230);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    //Sea
    glBegin(GL_QUADS);
    glColor3ub(6, 176, 210);
    glVertex2f(-1.0,-0.3);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-0.3);
    glEnd();

    /*
    //portContainers
    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(-0.8,-0.15);
    glVertex2f(-0.8,-0.2);
    glVertex2f(-0.75,-0.2);
    glVertex2f(-0.75,-0.15);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(217, 168, 0);
    glVertex2f(-0.8,-0.1);
    glVertex2f(-0.8,-0.15);
    glVertex2f(-0.75,-0.15);
    glVertex2f(-0.75,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(-0.8,-0.05);
    glVertex2f(-0.8,-0.1);
    glVertex2f(-0.75,-0.1);
    glVertex2f(-0.75,-0.05);
    glEnd();

    */

    //2
    glBegin(GL_QUADS);
    glColor3ub(205, 241, 5);
    glVertex2f(-0.7,-0.15);
    glVertex2f(-0.7,-0.2);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.65,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.7,-0.15);
    glVertex2f(-0.65,-0.15);
    glVertex2f(-0.65,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 125);
    glVertex2f(-0.7,-0.05);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.65,-0.1);
    glVertex2f(-0.65,-0.05);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3ub(205, 241, 5);
    glVertex2f(-0.6,-0.15);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.55,-0.2);
    glVertex2f(-0.55,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.6,-0.15);
    glVertex2f(-0.55,-0.15);
    glVertex2f(-0.55,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 125);
    glVertex2f(-0.6,-0.05);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.55,-0.1);
    glVertex2f(-0.55,-0.05);
    glEnd();

    //4
    glBegin(GL_QUADS);
    glColor3ub(255, 199, 10);
    glVertex2f(-0.5,-0.15);
    glVertex2f(-0.5,-0.2);
    glVertex2f(-0.45,-0.2);
    glVertex2f(-0.45,-0.15);
    glEnd();

    //OppositSide
    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.8,-0.15);
    glVertex2f(0.8,-0.2);
    glVertex2f(0.75,-0.2);
    glVertex2f(0.75,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(217, 168, 0);
    glVertex2f(0.8,-0.1);
    glVertex2f(0.8,-0.15);
    glVertex2f(0.75,-0.15);
    glVertex2f(0.75,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.8,-0.05);
    glVertex2f(0.8,-0.1);
    glVertex2f(0.75,-0.1);
    glVertex2f(0.75,-0.05);
    glEnd();

    //2
    glBegin(GL_QUADS);
    glColor3ub(205, 241, 5);
    glVertex2f(0.7,-0.15);
    glVertex2f(0.7,-0.2);
    glVertex2f(0.65,-0.2);
    glVertex2f(0.65,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.7,-0.1);
    glVertex2f(0.7,-0.15);
    glVertex2f(0.65,-0.15);
    glVertex2f(0.65,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 125);
    glVertex2f(0.7,-0.05);
    glVertex2f(0.7,-0.1);
    glVertex2f(0.65,-0.1);
    glVertex2f(0.65,-0.05);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3ub(205, 241, 5);
    glVertex2f(0.6,-0.15);
    glVertex2f(0.6,-0.2);
    glVertex2f(0.55,-0.2);
    glVertex2f(0.55,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.6,-0.1);
    glVertex2f(0.6,-0.15);
    glVertex2f(0.55,-0.15);
    glVertex2f(0.55,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 125);
    glVertex2f(0.6,-0.05);
    glVertex2f(0.6,-0.1);
    glVertex2f(0.55,-0.1);
    glVertex2f(0.55,-0.05);
    glEnd();

    //4
    glBegin(GL_QUADS);
    glColor3ub(66, 80, 255);
    glVertex2f(0.5,-0.15);
    glVertex2f(0.5,-0.2);
    glVertex2f(0.45,-0.2);
    glVertex2f(0.45,-0.15);
    glEnd();

    glScalef(2,2,0); // increase x right and y
    glTranslatef(-0.3f, 0.1f, 0.0f); // Translate x right and y up

    glBegin(GL_QUADS);
    glColor3ub(66, 80, 255);
    glVertex2f(0.5,-0.15);
    glVertex2f(0.5,-0.2);
    glVertex2f(0.45,-0.2);
    glVertex2f(0.45,-0.15);
    glEnd();

    glLoadIdentity();


    //crane1
    glBegin(GL_QUADS);
    glColor3ub(160, 133, 103);
    glVertex2f(-0.37,0.25);
    glVertex2f(-0.37,-0.15);
    glVertex2f(-0.33,-0.15);
    glVertex2f(-0.33,0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(167, 140, 111);
    glVertex2f(-0.3,0.35);
    glVertex2f(-0.37,0.25);
    glVertex2f(-0.33,0.25);
    glVertex2f(-0.27,0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.07,0.35);
    glVertex2f(-0.07,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8, 135, 114);
    glVertex2f(-0.095,0.1);
    glVertex2f(-0.095,0.05);
    glVertex2f(-0.045,0.05);
    glVertex2f(-0.045,0.1);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(106, 106, 106);
    glVertex2f(-0.4,-0.15);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.3,-0.15);
    glEnd();

    glTranslatef(-0.47f, 0.0f, 0.0f);

    //WindMIl
    glBegin(GL_QUADS);
    glColor3ub(128, 139, 150);
    glVertex2f(-0.37,0.25);
    glVertex2f(-0.37,-0.15);
    glVertex2f(-0.33,-0.15);
    glVertex2f(-0.33,0.25);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(106, 106, 106);
    glVertex2f(-0.4,-0.15);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.3,-0.15);
    glEnd();

    glLoadIdentity();


    //crane2
    glBegin(GL_QUADS);
    glColor3ub(160, 133, 103);
    glVertex2f(-0.17,0.25);
    glVertex2f(-0.17,-0.15);
    glVertex2f(-0.13,-0.15);
    glVertex2f(-0.13,0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(167, 140, 111);
    glVertex2f(-0.1,0.35);
    glVertex2f(-0.17,0.25);
    glVertex2f(-0.13,0.25);
    glVertex2f(-0.07,0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.27,0.35);
    glVertex2f(-0.27,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(106, 106, 106);
    glVertex2f(-0.2,-0.15);
    glVertex2f(-0.2,-0.2);
    glVertex2f(-0.1,-0.2);
    glVertex2f(-0.1,-0.15);
    glEnd();




    //PortBase
    glBegin(GL_QUADS);
    glColor3ub(80, 80, 78);
    glVertex2f(-1.0,-0.2);
    glVertex2f(-1.0,-0.3);
    glVertex2f(1.0,-0.3);
    glVertex2f(1.0,-0.2);
    glEnd();

    //WaterLines
    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(-0.1,-0.6);
    glVertex2f(-0.2,-0.6);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(-0.4,-0.8);
    glVertex2f(-0.6,-0.8);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(-0.55,-0.5);
    glVertex2f(-0.7,-0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(0.3,-0.5);
    glVertex2f(0.4,-0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(0.2,-0.85);
    glVertex2f(0.35,-0.85);
    glEnd();


    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    //Ship
    glBegin(GL_POLYGON);
    glColor3ub(246, 244, 244);
    glVertex2f (0.1,-0.6);
    glVertex2f (0.2,-0.7);
    glVertex2f (0.5,-0.7);
    glVertex2f (0.6,-0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(80, 80, 78);
    glVertex2f(0.1,-0.58);
    glVertex2f(0.1,-0.6);
    glVertex2f(0.6,-0.6);
    glVertex2f(0.6,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(181, 181, 181);
    glVertex2f(0.4,-0.45);
    glVertex2f(0.4,-0.58);
    glVertex2f(0.58,-0.58);
    glVertex2f(0.58,-0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(47, 47, 47);
    glVertex2f(0.5,-0.35);
    glVertex2f(0.5,-0.45);
    glVertex2f(0.55,-0.45);
    glVertex2f(0.55,-0.35);
    glEnd();

    //containers
    glBegin(GL_QUADS);
    glColor3ub(217, 168, 0);
    glVertex2f(0.2,-0.53);
    glVertex2f(0.2,-0.58);
    glVertex2f(0.25,-0.58);
    glVertex2f(0.25,-0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.3,-0.53);
    glVertex2f(0.3,-0.58);
    glVertex2f(0.35,-0.58);
    glVertex2f(0.35,-0.53);
    glEnd();
    glPopMatrix();





    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    //Clouds1
    int j;

    x=-0.6f;
    y=0.6f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.55f;
    y=0.65f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.54f;
    y=0.59f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();


    //Clouds2
    x=-0.2f;
    y=0.75f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.15f;
    y=0.8f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();


    x=-0.14f;
    y=0.74f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();


    //Clouds3
    x=0.65f;
    y=0.6f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.7f;
    y=0.65f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.7f;
    y=0.59f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();

    //Propellers
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(-0.82,0.27,0);
    glRotatef(l,0,0.0,0.1);//i=how many degree you want to rotate around an axis

    glBegin(GL_TRIANGLES);
    glColor3ub(169, 50, 38);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, -0.03f);
    glVertex2f( 0.15f, 0.03f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(34, 153, 84);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.03f, 0.15f);
    glVertex2f( -0.03f, 0.15f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(211, 84, 0);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.15f, 0.03f);
    glVertex2f( -0.15f, -0.03f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.03f, -0.15f);
    glVertex2f( 0.03f, -0.15f);
    glEnd();
    glPopMatrix();

    l+=0.02f;


    //PropellersCircle
    x=-.82f;
    y=.27f;
    radius =.02f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(109, 109, 109);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //Birds
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8f, 0.5f);
    glVertex2f( 0.82f, 0.5f);
    glVertex2f( 0.78f, 0.53f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8f, 0.5f);
    glVertex2f( 0.82f, 0.5f);
    glVertex2f( 0.82f, 0.535f);
    glEnd();

    glTranslatef(-0.08f, -0.05f, 0.0f);

    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8f, 0.5f);
    glVertex2f( 0.82f, 0.5f);
    glVertex2f( 0.78f, 0.53f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8f, 0.5f);
    glVertex2f( 0.82f, 0.5f);
    glVertex2f( 0.82f, 0.535f);
    glEnd();

    glLoadIdentity();

    glPopMatrix();

    glFlush();

}








////////////////////////////////////////////////////////////////////////////////////////////////








void evening() {
    glClearColor(1.0,1.0,1.0,1.0);
   glClear(GL_COLOR_BUFFER_BIT);



   //Sky
    glBegin(GL_QUADS);
    glColor3ub(241, 168, 76);
    glVertex2f(-1.0,-0.2);
    glVertex2f(-1.0,1.0);
    glVertex2f(1.0,1.0);
    glVertex2f(1.0,-0.2);
    glEnd();


    //Sun

    int i;

    GLfloat x=.4f;
    GLfloat y=.1f;
    GLfloat radius =.1f;
    int triangleAmount = 20;


    GLfloat twicePi = 2.0f * PI;

    glEnable(GL_LIGHTING);//Enable Light Effect

    GLfloat global_ambient[] = {3.9,0.0,0.0, 0.1};//ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(244, 58, 3);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();



    glDisable(GL_LIGHTING);//Enable Light Effect


    //Sea
    glBegin(GL_QUADS);
    glColor3ub(59, 205, 235);
    glVertex2f(-1.0,-0.3);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-0.3);
    glEnd();

    /*
    //portContainers
    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(-0.8,-0.15);
    glVertex2f(-0.8,-0.2);
    glVertex2f(-0.75,-0.2);
    glVertex2f(-0.75,-0.15);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(217, 168, 0);
    glVertex2f(-0.8,-0.1);
    glVertex2f(-0.8,-0.15);
    glVertex2f(-0.75,-0.15);
    glVertex2f(-0.75,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(-0.8,-0.05);
    glVertex2f(-0.8,-0.1);
    glVertex2f(-0.75,-0.1);
    glVertex2f(-0.75,-0.05);
    glEnd();

    */

    //2
    glBegin(GL_QUADS);
    glColor3ub(205, 241, 5);
    glVertex2f(-0.7,-0.15);
    glVertex2f(-0.7,-0.2);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.65,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.7,-0.15);
    glVertex2f(-0.65,-0.15);
    glVertex2f(-0.65,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 125);
    glVertex2f(-0.7,-0.05);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.65,-0.1);
    glVertex2f(-0.65,-0.05);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3ub(205, 241, 5);
    glVertex2f(-0.6,-0.15);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.55,-0.2);
    glVertex2f(-0.55,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.6,-0.15);
    glVertex2f(-0.55,-0.15);
    glVertex2f(-0.55,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 125);
    glVertex2f(-0.6,-0.05);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.55,-0.1);
    glVertex2f(-0.55,-0.05);
    glEnd();

    //4
    glBegin(GL_QUADS);
    glColor3ub(255, 199, 10);
    glVertex2f(-0.5,-0.15);
    glVertex2f(-0.5,-0.2);
    glVertex2f(-0.45,-0.2);
    glVertex2f(-0.45,-0.15);
    glEnd();

    //OppositSide
    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.8,-0.15);
    glVertex2f(0.8,-0.2);
    glVertex2f(0.75,-0.2);
    glVertex2f(0.75,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(217, 168, 0);
    glVertex2f(0.8,-0.1);
    glVertex2f(0.8,-0.15);
    glVertex2f(0.75,-0.15);
    glVertex2f(0.75,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.8,-0.05);
    glVertex2f(0.8,-0.1);
    glVertex2f(0.75,-0.1);
    glVertex2f(0.75,-0.05);
    glEnd();

    //2
    glBegin(GL_QUADS);
    glColor3ub(205, 241, 5);
    glVertex2f(0.7,-0.15);
    glVertex2f(0.7,-0.2);
    glVertex2f(0.65,-0.2);
    glVertex2f(0.65,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.7,-0.1);
    glVertex2f(0.7,-0.15);
    glVertex2f(0.65,-0.15);
    glVertex2f(0.65,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 125);
    glVertex2f(0.7,-0.05);
    glVertex2f(0.7,-0.1);
    glVertex2f(0.65,-0.1);
    glVertex2f(0.65,-0.05);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3ub(205, 241, 5);
    glVertex2f(0.6,-0.15);
    glVertex2f(0.6,-0.2);
    glVertex2f(0.55,-0.2);
    glVertex2f(0.55,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.6,-0.1);
    glVertex2f(0.6,-0.15);
    glVertex2f(0.55,-0.15);
    glVertex2f(0.55,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 125);
    glVertex2f(0.6,-0.05);
    glVertex2f(0.6,-0.1);
    glVertex2f(0.55,-0.1);
    glVertex2f(0.55,-0.05);
    glEnd();

    //4
    glBegin(GL_QUADS);
    glColor3ub(66, 80, 255);
    glVertex2f(0.5,-0.15);
    glVertex2f(0.5,-0.2);
    glVertex2f(0.45,-0.2);
    glVertex2f(0.45,-0.15);
    glEnd();

    glScalef(2,2,0); // increase x right and y
    glTranslatef(-0.3f, 0.1f, 0.0f); // Translate x right and y up

    glBegin(GL_QUADS);
    glColor3ub(66, 80, 255);
    glVertex2f(0.5,-0.15);
    glVertex2f(0.5,-0.2);
    glVertex2f(0.45,-0.2);
    glVertex2f(0.45,-0.15);
    glEnd();

    glLoadIdentity();


    //crane1
    glBegin(GL_QUADS);
    glColor3ub(160, 133, 103);
    glVertex2f(-0.37,0.25);
    glVertex2f(-0.37,-0.15);
    glVertex2f(-0.33,-0.15);
    glVertex2f(-0.33,0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(167, 140, 111);
    glVertex2f(-0.3,0.35);
    glVertex2f(-0.37,0.25);
    glVertex2f(-0.33,0.25);
    glVertex2f(-0.27,0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.07,0.35);
    glVertex2f(-0.07,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8, 135, 114);
    glVertex2f(-0.095,0.1);
    glVertex2f(-0.095,0.05);
    glVertex2f(-0.045,0.05);
    glVertex2f(-0.045,0.1);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(106, 106, 106);
    glVertex2f(-0.4,-0.15);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.3,-0.15);
    glEnd();

    glTranslatef(-0.47f, 0.0f, 0.0f);

    //WindMIl
    glBegin(GL_QUADS);
    glColor3ub(128, 139, 150);
    glVertex2f(-0.37,0.25);
    glVertex2f(-0.37,-0.15);
    glVertex2f(-0.33,-0.15);
    glVertex2f(-0.33,0.25);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(106, 106, 106);
    glVertex2f(-0.4,-0.15);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.3,-0.15);
    glEnd();

    glLoadIdentity();


    //crane2
    glBegin(GL_QUADS);
    glColor3ub(160, 133, 103);
    glVertex2f(-0.17,0.25);
    glVertex2f(-0.17,-0.15);
    glVertex2f(-0.13,-0.15);
    glVertex2f(-0.13,0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(167, 140, 111);
    glVertex2f(-0.1,0.35);
    glVertex2f(-0.17,0.25);
    glVertex2f(-0.13,0.25);
    glVertex2f(-0.07,0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.27,0.35);
    glVertex2f(-0.27,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(106, 106, 106);
    glVertex2f(-0.2,-0.15);
    glVertex2f(-0.2,-0.2);
    glVertex2f(-0.1,-0.2);
    glVertex2f(-0.1,-0.15);
    glEnd();




    //PortBase
    glBegin(GL_QUADS);
    glColor3ub(80, 80, 78);
    glVertex2f(-1.0,-0.2);
    glVertex2f(-1.0,-0.3);
    glVertex2f(1.0,-0.3);
    glVertex2f(1.0,-0.2);
    glEnd();

    //WaterLines
    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(-0.1,-0.6);
    glVertex2f(-0.2,-0.6);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(-0.4,-0.8);
    glVertex2f(-0.6,-0.8);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(-0.55,-0.5);
    glVertex2f(-0.7,-0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(0.3,-0.5);
    glVertex2f(0.4,-0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(0.2,-0.85);
    glVertex2f(0.35,-0.85);
    glEnd();


    glPushMatrix();

    glTranslatef(position1,0.0f, 0.0f);
    //Ship
    glBegin(GL_POLYGON);
    glColor3ub(246, 244, 244);
    glVertex2f (0.1,-0.6);
    glVertex2f (0.2,-0.7);
    glVertex2f (0.5,-0.7);
    glVertex2f (0.6,-0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(80, 80, 78);
    glVertex2f(0.1,-0.58);
    glVertex2f(0.1,-0.6);
    glVertex2f(0.6,-0.6);
    glVertex2f(0.6,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(181, 181, 181);
    glVertex2f(0.4,-0.45);
    glVertex2f(0.4,-0.58);
    glVertex2f(0.58,-0.58);
    glVertex2f(0.58,-0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(47, 47, 47);
    glVertex2f(0.5,-0.35);
    glVertex2f(0.5,-0.45);
    glVertex2f(0.55,-0.45);
    glVertex2f(0.55,-0.35);
    glEnd();

    //containers
    glBegin(GL_QUADS);
    glColor3ub(217, 168, 0);
    glVertex2f(0.2,-0.53);
    glVertex2f(0.2,-0.58);
    glVertex2f(0.25,-0.58);
    glVertex2f(0.25,-0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.3,-0.53);
    glVertex2f(0.3,-0.58);
    glVertex2f(0.35,-0.58);
    glVertex2f(0.35,-0.53);
    glEnd();
    glPopMatrix();





    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    //Clouds1
    int j;

    x=-0.6f;
    y=0.6f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.55f;
    y=0.65f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.54f;
    y=0.59f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();


    //Clouds2
    x=-0.2f;
    y=0.75f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.15f;
    y=0.8f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();


    x=-0.14f;
    y=0.74f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();


    //Clouds3
    x=0.65f;
    y=0.6f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.7f;
    y=0.65f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.7f;
    y=0.59f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();

    //Propellers
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(-0.82,0.27,0);
    glRotatef(l,0,0.0,0.1);//i=how many degree you want to rotate around an axis

    glBegin(GL_TRIANGLES);
    glColor3ub(169, 50, 38);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, -0.03f);
    glVertex2f( 0.15f, 0.03f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(34, 153, 84);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.03f, 0.15f);
    glVertex2f( -0.03f, 0.15f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(211, 84, 0);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.15f, 0.03f);
    glVertex2f( -0.15f, -0.03f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.03f, -0.15f);
    glVertex2f( 0.03f, -0.15f);
    glEnd();
    glPopMatrix();

    l+=0.02f;


    //PropellersCircle
    x=-.82f;
    y=.27f;
    radius =.02f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(109, 109, 109);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //Birds
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8f, 0.5f);
    glVertex2f( 0.82f, 0.5f);
    glVertex2f( 0.78f, 0.53f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8f, 0.5f);
    glVertex2f( 0.82f, 0.5f);
    glVertex2f( 0.82f, 0.535f);
    glEnd();

    glTranslatef(-0.08f, -0.05f, 0.0f);

    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8f, 0.5f);
    glVertex2f( 0.82f, 0.5f);
    glVertex2f( 0.78f, 0.53f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8f, 0.5f);
    glVertex2f( 0.82f, 0.5f);
    glVertex2f( 0.82f, 0.535f);
    glEnd();

    glLoadIdentity();

    glPopMatrix();


   glFlush();
}








///////////////////////////////////////////////////////////////////////////////////////////////







void day() {
    glClearColor(1.0,1.0,1.0,1.0);
   glClear(GL_COLOR_BUFFER_BIT);



   //Sky
    glBegin(GL_QUADS);
    glColor3ub(192, 244, 247);
    glVertex2f(-1.0,-0.2);
    glVertex2f(-1.0,1.0);
    glVertex2f(1.0,1.0);
    glVertex2f(1.0,-0.2);
    glEnd();


    //Sun

    int i;

    GLfloat x=.4f;
    GLfloat y=.6f;
    GLfloat radius =.1f;
    int triangleAmount = 20;


    GLfloat twicePi = 2.0f * PI;



    glEnable(GL_LIGHTING);//Enable Light Effect

    GLfloat global_ambient[] = {5.9,0.0,0.0, 0.1};//ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(244, 58, 3);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();



    glDisable(GL_LIGHTING);//Enable Light Effect





    //Sea
    glBegin(GL_QUADS);
    glColor3ub(65, 223, 255);
    glVertex2f(-1.0,-0.3);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-0.3);
    glEnd();

    /*
    //portContainers
    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(-0.8,-0.15);
    glVertex2f(-0.8,-0.2);
    glVertex2f(-0.75,-0.2);
    glVertex2f(-0.75,-0.15);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(217, 168, 0);
    glVertex2f(-0.8,-0.1);
    glVertex2f(-0.8,-0.15);
    glVertex2f(-0.75,-0.15);
    glVertex2f(-0.75,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(-0.8,-0.05);
    glVertex2f(-0.8,-0.1);
    glVertex2f(-0.75,-0.1);
    glVertex2f(-0.75,-0.05);
    glEnd();

    */

    //2
    glBegin(GL_QUADS);
    glColor3ub(205, 241, 5);
    glVertex2f(-0.7,-0.15);
    glVertex2f(-0.7,-0.2);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.65,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.7,-0.15);
    glVertex2f(-0.65,-0.15);
    glVertex2f(-0.65,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 125);
    glVertex2f(-0.7,-0.05);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.65,-0.1);
    glVertex2f(-0.65,-0.05);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3ub(205, 241, 5);
    glVertex2f(-0.6,-0.15);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.55,-0.2);
    glVertex2f(-0.55,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.6,-0.15);
    glVertex2f(-0.55,-0.15);
    glVertex2f(-0.55,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 125);
    glVertex2f(-0.6,-0.05);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.55,-0.1);
    glVertex2f(-0.55,-0.05);
    glEnd();

    //4
    glBegin(GL_QUADS);
    glColor3ub(255, 199, 10);
    glVertex2f(-0.5,-0.15);
    glVertex2f(-0.5,-0.2);
    glVertex2f(-0.45,-0.2);
    glVertex2f(-0.45,-0.15);
    glEnd();

    //OppositSide
    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.8,-0.15);
    glVertex2f(0.8,-0.2);
    glVertex2f(0.75,-0.2);
    glVertex2f(0.75,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(217, 168, 0);
    glVertex2f(0.8,-0.1);
    glVertex2f(0.8,-0.15);
    glVertex2f(0.75,-0.15);
    glVertex2f(0.75,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.8,-0.05);
    glVertex2f(0.8,-0.1);
    glVertex2f(0.75,-0.1);
    glVertex2f(0.75,-0.05);
    glEnd();

    //2
    glBegin(GL_QUADS);
    glColor3ub(205, 241, 5);
    glVertex2f(0.7,-0.15);
    glVertex2f(0.7,-0.2);
    glVertex2f(0.65,-0.2);
    glVertex2f(0.65,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.7,-0.1);
    glVertex2f(0.7,-0.15);
    glVertex2f(0.65,-0.15);
    glVertex2f(0.65,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 125);
    glVertex2f(0.7,-0.05);
    glVertex2f(0.7,-0.1);
    glVertex2f(0.65,-0.1);
    glVertex2f(0.65,-0.05);
    glEnd();

    //3
    glBegin(GL_QUADS);
    glColor3ub(205, 241, 5);
    glVertex2f(0.6,-0.15);
    glVertex2f(0.6,-0.2);
    glVertex2f(0.55,-0.2);
    glVertex2f(0.55,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.6,-0.1);
    glVertex2f(0.6,-0.15);
    glVertex2f(0.55,-0.15);
    glVertex2f(0.55,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 69, 125);
    glVertex2f(0.6,-0.05);
    glVertex2f(0.6,-0.1);
    glVertex2f(0.55,-0.1);
    glVertex2f(0.55,-0.05);
    glEnd();

    //4
    glBegin(GL_QUADS);
    glColor3ub(66, 80, 255);
    glVertex2f(0.5,-0.15);
    glVertex2f(0.5,-0.2);
    glVertex2f(0.45,-0.2);
    glVertex2f(0.45,-0.15);
    glEnd();

    glScalef(2,2,0); // increase x right and y
    glTranslatef(-0.3f, 0.1f, 0.0f); // Translate x right and y up

    glBegin(GL_QUADS);
    glColor3ub(66, 80, 255);
    glVertex2f(0.5,-0.15);
    glVertex2f(0.5,-0.2);
    glVertex2f(0.45,-0.2);
    glVertex2f(0.45,-0.15);
    glEnd();

    glLoadIdentity();


    //crane1
    glBegin(GL_QUADS);
    glColor3ub(160, 133, 103);
    glVertex2f(-0.37,0.25);
    glVertex2f(-0.37,-0.15);
    glVertex2f(-0.33,-0.15);
    glVertex2f(-0.33,0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(167, 140, 111);
    glVertex2f(-0.3,0.35);
    glVertex2f(-0.37,0.25);
    glVertex2f(-0.33,0.25);
    glVertex2f(-0.27,0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.07,0.35);
    glVertex2f(-0.07,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8, 135, 114);
    glVertex2f(-0.095,0.1);
    glVertex2f(-0.095,0.05);
    glVertex2f(-0.045,0.05);
    glVertex2f(-0.045,0.1);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(106, 106, 106);
    glVertex2f(-0.4,-0.15);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.3,-0.15);
    glEnd();

    glTranslatef(-0.47f, 0.0f, 0.0f);

    //WindMIl
    glBegin(GL_QUADS);
    glColor3ub(128, 139, 150);
    glVertex2f(-0.37,0.25);
    glVertex2f(-0.37,-0.15);
    glVertex2f(-0.33,-0.15);
    glVertex2f(-0.33,0.25);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(106, 106, 106);
    glVertex2f(-0.4,-0.15);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.3,-0.15);
    glEnd();

    glLoadIdentity();


    //crane2
    glBegin(GL_QUADS);
    glColor3ub(160, 133, 103);
    glVertex2f(-0.17,0.25);
    glVertex2f(-0.17,-0.15);
    glVertex2f(-0.13,-0.15);
    glVertex2f(-0.13,0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(167, 140, 111);
    glVertex2f(-0.1,0.35);
    glVertex2f(-0.17,0.25);
    glVertex2f(-0.13,0.25);
    glVertex2f(-0.07,0.35);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.27,0.35);
    glVertex2f(-0.27,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(106, 106, 106);
    glVertex2f(-0.2,-0.15);
    glVertex2f(-0.2,-0.2);
    glVertex2f(-0.1,-0.2);
    glVertex2f(-0.1,-0.15);
    glEnd();




    //PortBase
    glBegin(GL_QUADS);
    glColor3ub(80, 80, 78);
    glVertex2f(-1.0,-0.2);
    glVertex2f(-1.0,-0.3);
    glVertex2f(1.0,-0.3);
    glVertex2f(1.0,-0.2);
    glEnd();

    //WaterLines
    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(-0.1,-0.6);
    glVertex2f(-0.2,-0.6);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(-0.4,-0.8);
    glVertex2f(-0.6,-0.8);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(-0.55,-0.5);
    glVertex2f(-0.7,-0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(0.3,-0.5);
    glVertex2f(0.4,-0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(248, 249, 249);
    glVertex2f(0.2,-0.85);
    glVertex2f(0.35,-0.85);
    glEnd();


    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

    //Ship
    glBegin(GL_POLYGON);
    glColor3ub(246, 244, 244);
    glVertex2f (0.1,-0.6);
    glVertex2f (0.2,-0.7);
    glVertex2f (0.5,-0.7);
    glVertex2f (0.6,-0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(80, 80, 78);
    glVertex2f(0.1,-0.58);
    glVertex2f(0.1,-0.6);
    glVertex2f(0.6,-0.6);
    glVertex2f(0.6,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(181, 181, 181);
    glVertex2f(0.4,-0.45);
    glVertex2f(0.4,-0.58);
    glVertex2f(0.58,-0.58);
    glVertex2f(0.58,-0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(47, 47, 47);
    glVertex2f(0.5,-0.35);
    glVertex2f(0.5,-0.45);
    glVertex2f(0.55,-0.45);
    glVertex2f(0.55,-0.35);
    glEnd();

    //containers
    glBegin(GL_QUADS);
    glColor3ub(217, 168, 0);
    glVertex2f(0.2,-0.53);
    glVertex2f(0.2,-0.58);
    glVertex2f(0.25,-0.58);
    glVertex2f(0.25,-0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 138, 217);
    glVertex2f(0.3,-0.53);
    glVertex2f(0.3,-0.58);
    glVertex2f(0.35,-0.58);
    glVertex2f(0.35,-0.53);
    glEnd();
    glPopMatrix();





    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    //Clouds1
    int j;

    x=-0.6f;
    y=0.6f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.55f;
    y=0.65f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.54f;
    y=0.59f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();


    //Clouds2
    x=-0.2f;
    y=0.75f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-0.15f;
    y=0.8f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();


    x=-0.14f;
    y=0.74f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();


    //Clouds3
    x=0.65f;
    y=0.6f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.7f;
    y=0.65f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.7f;
    y=0.59f;
    radius =.05f;
    triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(174, 214, 241);
    glVertex2f(x, y); // center of circle
    for(j = 0; j <= triangleAmount; j++)
    {
        glVertex2f(
            x + (radius * cos(j *  twicePi / triangleAmount)),
            y + (radius * sin(j * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPopMatrix();

    //Propellers
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(-0.82,0.27,0);
    glRotatef(l,0,0.0,0.1);//i=how many degree you want to rotate around an axis

    glBegin(GL_TRIANGLES);
    glColor3ub(169, 50, 38);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, -0.03f);
    glVertex2f( 0.15f, 0.03f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(34, 153, 84);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.03f, 0.15f);
    glVertex2f( -0.03f, 0.15f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(211, 84, 0);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.15f, 0.03f);
    glVertex2f( -0.15f, -0.03f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.03f, -0.15f);
    glVertex2f( 0.03f, -0.15f);
    glEnd();
    glPopMatrix();

    l+=0.02f;


    //PropellersCircle
    x=-.82f;
    y=.27f;
    radius =.02f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(109, 109, 109);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //Birds
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8f, 0.5f);
    glVertex2f( 0.82f, 0.5f);
    glVertex2f( 0.78f, 0.53f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8f, 0.5f);
    glVertex2f( 0.82f, 0.5f);
    glVertex2f( 0.82f, 0.535f);
    glEnd();

    glTranslatef(-0.08f, -0.05f, 0.0f);

    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8f, 0.5f);
    glVertex2f( 0.82f, 0.5f);
    glVertex2f( 0.78f, 0.53f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(36, 113, 163);
    glVertex2f(0.8f, 0.5f);
    glVertex2f( 0.82f, 0.5f);
    glVertex2f( 0.82f, 0.535f);
    glEnd();

    glLoadIdentity();

    glPopMatrix();


   glFlush();
}





void sound()
{

    PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

void sound2()
{

    PlaySound(NULL, NULL, SND_ASYNC|SND_FILENAME);


}




void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 's':
        speed1 = 0.0f;
        break;
    case 'r':
        speed1 = 0.02f;
        break;

    case 'd':
        glutDisplayFunc(day);
        glutPostRedisplay();
        break;

    case 'e':
        glutDisplayFunc(evening);
        glutPostRedisplay();
        break;

    case 'n':
        glutDisplayFunc(night);
        glutPostRedisplay();
        break;

    case 'p':

        glLoadIdentity();
        glutDisplayFunc(evening);
        sound();
        glutPostRedisplay();

        break;

    case 'o':
        glutDisplayFunc(night);
        sound2();
        glutPostRedisplay();
        break;

        glutPostRedisplay();
    }
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Test");
    glutInitWindowSize(640,500);
    glutDisplayFunc(day);

    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutSpecialFunc(SpecialInput);
    glutIdleFunc(Idle);
    glutTimerFunc(100, update, 0);

    glutMainLoop();
    return 0;
}

