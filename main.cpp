#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main()
{

    bool IsGameOver = false;
    cout << "Welcome to labyrinth" << endl;
    GameMap Map;
    Player Hero;

    while (!IsGameOver) {

        // llamado al personaje
        Hero.CallInput();

        // actualizamos info del personaje al mapa
        Map.SetPlayerCell(Hero.XAxis(), Hero.YAxis());
        // dibuja el mapa
        Map.Draw();
    }
    return 0;
}
