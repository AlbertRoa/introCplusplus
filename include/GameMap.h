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

        void DrawIntro();
        void DrawVictory();
        void DrawDead();
        void Draw();
        bool SetPlayerCell(int PlayerX, int PlaterY);
        bool IsGameOver = false;

    protected:
        void LoadMapFromFile();
    private:
};

#endif // GAMEMAP_H
