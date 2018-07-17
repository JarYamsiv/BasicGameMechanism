#include "headers/core.h"


bool gKey[256];
float pos=0.0;

CORE::CORE(int x)
{
    
}

void  Display()
{
    glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);		/* set current color to white */
        glBegin(GL_POLYGON);			/* draw filled triangle */
            glVertex2f(pos,pos);			/* specify each vertex of triangle */
            glVertex2f(0.0,0.1);
            glVertex2f(0.1,0.1);
        glEnd();	
    glFlush();
    glutSwapBuffers();
}

void  Reshape(int w,int h)
{

}

void  Keyboard(unsigned char key,int x,int y)
{
    if(key==27)// 27 is the ascii code for escape
    {
        exit(0);
    }

    gKey[key]=true;

}

void  KeyboardUp(unsigned char key,int x,int y)
{
    gKey[key]=false;
}

void  MouseMotion(int x,int y)
{

}

void  Mouse(int button,int state,int x,int y)
{

}

void  Timer(int value)
{
    if(gKey['w'])
    {
        pos+=0.001;
    }
    if(gKey['s'])
    {
        pos-=0.001;
    }
    //i think the runtime inputs shoul go here.. like the move charecter and etc.. so that they'll be smooth
    glutTimerFunc(1,Timer,0);
}

void  Idle()
{
    Display();
}

