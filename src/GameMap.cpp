#include <iostream>
#include "GameMap.h"
#include <fstream>

using namespace std;

GameMap::GameMap()
{
    //ctor
    PlayerCell = NULL; // inicializa la celda del jugador en null
    LoadMapFromFile();

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
    PlayerCell = &cells[PlayerY][PlayerX];
    PlayerCell->id = 3;

    //cout << "las coordenadas del jugador estan en: " << PlayerX << ", " << PlayerY;
}

void GameMap::LoadMapFromFile() {
    string line;
    ifstream MapFile("Map.txt"); //intenta leer el archivo. ifstream => input

    if (MapFile.is_open())
    {
        cout << "archivo cargado" << endl;
    } else
    {
        cout << "creando archivo" << endl;
        ofstream CreateMapFile("Map.txt"); // crea el archivo. ofstream => output

        if (CreateMapFile.is_open())
        {


        } else
        {
            cout << "Fatal error, Map file can not be created" << endl;
        }
    }

}
