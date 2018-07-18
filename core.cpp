#include "headers/core.h"
#include <iostream>


bool gKey[256];
float pos=0.0;
CORE _CORE(7);

//===================================================CORE FUNCTIONS=========================================================

CORE::CORE(int x)
{
    mainPlayer=Player();
    std::cout<<"Core initialised!!"<<std::endl;
}

CORE::~CORE()
{
    std::cout<<"Deleting core"<<std::endl;
}

void CORE::Display()
{
    	mainPlayer.Display();
}

void CORE::ProcessEvents(bool *gKey_)
{
    if(gKey_['w'])
    {
        mainPlayer.Move(0.001);
    }
    if(gKey_['s'])
    {
        mainPlayer.Move(-0.001);
    }

}


//===================================================GLUT FUNCTIONS========================================================
void  Display()
{
    glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    _CORE.Display();
    glFlush();
    glutSwapBuffers();
}

void  Reshape(int w,int h)
{

}

void  Keyboard(unsigned char key,int x,int y)
{
    if(key==27)// 27 is the ascii code for escapeKey
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
    _CORE.ProcessEvents(gKey);
    //i think the runtime inputs shoul go here.. like the move charecter and etc.. so that they'll be smooth
    glutTimerFunc(1,Timer,0);
}

void  Idle()
{
    Display();
}

