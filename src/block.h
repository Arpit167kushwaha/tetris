#pragma once
#include<vector>
#include<position.h>
#include<map>

class Block{
    public:
    Block();
    int id;
    std::map<int, std::vector<Position>> cells;
    private:
    int cellsize;
    int rotationstate;
};