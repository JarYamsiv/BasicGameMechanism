#ifndef _PLAYER_H
#define _PLAYER_H

#include "../headers/player.h"
#include <GL/freeglut.h>

Player::Player()
{
    x=0;y=0;
    width=0.1;height=0.1;
}

Player::~Player()
{

}

void Player::Display()
{
    glColor3f(1.0, 1.0, 0.0);		
        glBegin(GL_QUADS);
            glVertex2f(x-(width/2),y+(height/2));			
            glVertex2f(x+(width/2),y+(height/2));			
            glVertex2f(x-(width/2),y-(height/2));
            glVertex2f(x+(width/2),y-(height/2));
        glEnd();

}

void Player::Move(float movement)
{
    x+=movement;
}


#endif