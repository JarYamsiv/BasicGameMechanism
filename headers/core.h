#ifndef _CORE_H
#define _CORE_H
#include <GL/freeglut.h>
#include "player.h"

class CORE{
public:
                CORE(int);
                ~CORE();
    void        Display();
    void        ProcessEvents(bool*);
    void        Update();
private:
    Player      mainPlayer;
    

};

extern CORE        _CORE;
extern bool        gkey[256];


void        Display();
void        Reshape(int ,int h);
void        Keyboard(unsigned char key,int x,int y);
void        KeyboardUp(unsigned char key,int x, int y);
void        MouseMotion(int x,int y);
void        Mouse(int button,int state,int x,int y);
void        Timer(int value);
void        Idle();

#endif

