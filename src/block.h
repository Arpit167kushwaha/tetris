#pragma once
#include<vector>
#include "position.h"
#include<map>
#include"color.h"

class Block{
    public:
    Block();
    void Draw();
    void Move(int dr, int dc);
    int id;
    std::map<int, std::vector<Position>> cells;
    std::vector<Position> GetPosition();
    private:
    int cellsize;
    int rotationstate;
    std::vector<Color> colors;
    int rowoffset = 0;
    int coloffset = 0;
};