#include <GL/freeglut.h>

    static void        Init(int argc, char **argv);
    
    void        Display();
    void        Reshape(int w,int h);
    void        Keyboard(unsigned char key,int x,int y);
    void        KeyboardUp(unsigned char key,int x, int y);
    void        MouseMotion(int x,int y);
    void        Mouse(int button,int state,int x,int y);
    void        Timer(int value);
    void        Idle();

