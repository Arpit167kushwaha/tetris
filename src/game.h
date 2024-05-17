#pragma once
#include<vector>
#include "block.h"
#include "grid.h"

class Game{
    public: 
    Game();
    Block GetRandomBlock();
    std::vector<Block> GetBlocks();
    void Draw();
    Grid grid;

private:
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
};