#include "headers/core.h"




void  Display()
{
    glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //draw

    glutSwapBuffers();
}

void  Reshape(int w,int h)
{

}

void  Keyboard(unsigned char key,int x,int y)
{

}

void  KeyboardUp(unsigned char key,int x,int y)
{

}

void  MouseMotion(int x,int y)
{

}

void  Mouse(int button,int state,int x,int y)
{

}

void  Timer(int value)
{
    //i think the runtime inputs shoul go here.. like the move charecter and etc.. so that they'll be smooth
    glutTimerFunc(1,Timer,0);
}

void  Idle()
{
    Display();
}

