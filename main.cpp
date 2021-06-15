#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main()
{

    GameMap Map;
    Player Hero;

    Map.DrawIntro();
     Map.Draw();
    while (!Map.IsGameOver) {

        // llamado al personaje
        Hero.CallInput();

        // actualizamos info del personaje al mapa
        if (Map.SetPlayerCell(Hero.XAxis(), Hero.YAxis()))
        {
            // dibuja el mapa
            Map.Draw();

        }
        else
        {
            Hero.ResetToSafePosition();
            Map.Draw();
        }
    }
    return 0;
}
