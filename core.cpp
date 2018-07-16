#include "headers/core.h"

void Core::Init(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Basic GL functionality");

    glutIgnoreKeyRepeat(0);

    


}

void Core::Run()
{
    glutDisplayFunc(Display);
    //other function assignemnts
    glutIdleFunc(Idle);
    glutTimerFunc(1,Timer,0);
}

void Core::Display()
{
    glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //draw

    glutSwapBuffers();
}

void Core::Reshape(int w,int h)
{

}

void Core::Keyboard(unsigned char key,int x,int y)
{

}

void Core::KeyboardUp(unsigned char key,int x,int y)
{

}

void Core::MouseMotion(int x,int y)
{

}

void Core::Mouse(int button,int state,int x,int y)
{

}

void Core::Timer(int value)
{
    //i think the runtime inputs shoul go here.. like the move charecter and etc.. so that they'll be smooth
    glutTimerFunc(1,Timer,0);
}

void Core::Idle()
{
    Display();
}

