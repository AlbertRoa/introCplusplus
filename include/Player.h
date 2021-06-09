#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
        // virtual ~Player(); destructor

        //
        void CallInput();
        int XAxis();
        int YAxis();
    protected:
        int x , y;
    private:
};

#endif // PLAYER_H
