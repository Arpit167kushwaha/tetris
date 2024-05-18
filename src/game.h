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
    void MoveBlockLeft();
    void MoveBlockRight();
    
    void MoveBlockDown();
    void HandleInput();
    Grid grid;

private:
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock(); 
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
};