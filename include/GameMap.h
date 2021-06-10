#ifndef GAMEMAP_H
#define GAMEMAP_H
#include "MapCell.h"


class GameMap
{
    public:
        GameMap();

        //apuntador al jugador
        MapCell* PlayerCell;
        MapCell cells[15][10];

        void Draw();
        void SetPlayerCell(int PlayerX, int PlaterY);

    protected:
        void LoadMapFromFile();
    private:
};

#endif // GAMEMAP_H
