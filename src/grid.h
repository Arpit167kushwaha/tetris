#pragma once 
#include<vector>
#include<raylib.h>
#include"color.h"

class Grid{
    public:
    Grid();
    int grid[30][20];
    void initialize();
    void print();
    void draw();

    private:
    int nrows;
    int ncols;
    int cellsize;
    std::vector<Color> colors;

    

};