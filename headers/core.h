#ifndef _CORE_H
#define _CORE_H
#include <GL/freeglut.h>

extern class CORE{
public:
                CORE(int);
                ~CORE();

private:
    void        Display();
    void        ProcessEvents();
    void        Update();

}_CORE;


extern bool        gkey[256];


void        Display();
void        Reshape(int w,int h);
void        Keyboard(unsigned char key,int x,int y);
void        KeyboardUp(unsigned char key,int x, int y);
void        MouseMotion(int x,int y);
void        Mouse(int button,int state,int x,int y);
void        Timer(int value);
void        Idle();

#endif

