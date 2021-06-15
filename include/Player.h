#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
        // virtual ~Player(); destructor

        void CallInput();
        void ResetToSafePosition(); // restore last position
        int XAxis();
        int YAxis();
    protected:
        int x , y;
        int lastX, lastY;
    private:
};

#endif // PLAYER_H
