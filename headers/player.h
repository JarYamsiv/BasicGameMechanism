class Player{
public:
                    Player();
                    ~Player();
    void            Display();
    void            ProcessEvents();
    void            Move(float);
    void            Update();
private:
    float           x,y;//position
    float           anlge;
    float           width,height;
};