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
    case 'w':
        y = y + 1;
        cout << "move Up" << endl;
        break;
    case 's':
        y = y - 1;
        cout << "move Down" << endl;
        break;
    case 'd':
        x = x + 1;
        cout << "move rigth" << endl;
        break;
    case 'a':
        x = x - 1;
        cout << "move left" << endl;
        break;

    }
    cout << "coordinates hero: " << x << ", " << y << endl;
}
//Player::~Player()
//{
    //dtor
//}


