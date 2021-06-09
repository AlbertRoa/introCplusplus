#include <iostream>
#include "GameMap.h"

using namespace std;

GameMap::GameMap()
{
    //ctor
    PlayerCell = NULL; // inicializa la celda del jugador en null
}

void GameMap::Draw()
{
    for (int indexX = 0; indexX < 15; indexX++)
    {
         for (int indexY = 0; indexY < 10; indexY++)
         {
             cout<< cells[indexX][indexY].id; //identificador para ejecutarlo desde cout
         }

         cout << endl;
    }
}

void GameMap::SetPlayerCell(int PlayerX, int PlayerY)
{   // condicional para colocar en cero la posiciona anterior si no esta en null
    if (PlayerCell != NULL)
    {
        PlayerCell->id = 0;
    }
    PlayerCell = &cells[PlayerX][PlayerY];
    PlayerCell->id = 3;

    //cout << "las coordenadas del jugador estan en: " << PlayerX << ", " << PlayerY;
}
