#include <GL/freeglut.h>

class Core{
public:
                Core(int argc, char **argv){Init(argc,argv);}
                ~Core(){}
    void        Run();
private:
    static void        Init(int argc, char **argv);
    
    static void        Display();
    static void        Reshape(int w,int h);
    static void        Keyboard(unsigned char key,int x,int y);
    static void        KeyboardUp(unsigned char key,int x, int y);
    static void        MouseMotion(int x,int y);
    static void        Mouse(int button,int state,int x,int y);
    static void        Timer(int value);
    static void        Idle();

};