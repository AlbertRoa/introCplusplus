#include <iostream>
#include "Player.h"


using namespace std;

Player::Player()
{
    //ctor
    x = 1;
    y = 1;
}

int Player::XAxis()
{
    return x;
}

int Player::YAxis()
{
    return y;
}

void Player::CallInput()
{

    char UserInput = ' ';

    cin >> UserInput;

    switch (UserInput)
    {
    case 'w': // move up
        y = y - 1;
        break;
    case 's': // move down
        y = y + 1;
        break;
    case 'd': // move rigth
        x = x + 1;
        break;
    case 'a': // move left
        x = x - 1;
        break;

    }
}
//Player::~Player()
//{
    //dtor
//}


