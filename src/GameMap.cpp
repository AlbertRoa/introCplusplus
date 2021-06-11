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
{
    // verificamos si la celda esta o no bloqueada, si no esta bloqueada nos movemos
    if (cells[PlayerY][PlayerX].IsBlocked() == false)
    {
        // condicional para colocar en cero la posiciona anterior si no esta en null
        if (PlayerCell != NULL)
        {
            PlayerCell->id = 0; // cero en caracter es un caracter vacio
        }
        PlayerCell = &cells[PlayerY][PlayerX];
        PlayerCell->id = 3;

    }
    else
    {

    }
}

void GameMap::LoadMapFromFile() {
    string line;
    int row = 0;
    ifstream MapFile("Map.txt"); //intenta leer el archivo. ifstream => input

    if (MapFile.is_open())
    {
        while (getline(MapFile, line))
        {
            for (int column = 0; column < line.length(); column++)
            {
                if (line[column] == '0')
                    cells[row][column].id = 0; // el valor de la celda no puede ser modificado por un string, pero al id si
                else
                {
                  cells[row][column].id = line[column];
                }
            }

            row++;
        }
    } else
    {
        ofstream CreateMapFile("Map.txt"); // crea el archivo. ofstream => output

        if (CreateMapFile.is_open())
        {
            for (int rows = 0; rows < 15; rows++)
            {
                for (int columns = 0; columns < 10; columns++)
                {
                    if (rows == 0 || rows == 14)
                    {
                        CreateMapFile << 1;
                    }
                    else if (rows != 0) {
                        if (columns == 0 || columns == 9)
                        {
                            CreateMapFile << 1;
                        }
                        else {
                            CreateMapFile << 0;
                        }
                    }
                }
                CreateMapFile << endl;
            }

        } else
        {
            cout << "Fatal error, Map file can not be created" << endl;
        }
    }

}
