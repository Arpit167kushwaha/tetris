#include "game.h"
#include "random"
#include "blocks.cpp"

Game::Game(){
    grid = Grid();
    blocks = GetBlocks();
    currentBlock = GetRandomBlock();
    nextBlock = GetRandomBlock();


}

Block Game::GetRandomBlock(){
    if(blocks.empty()){
        blocks = GetBlocks();
    }
    int randomIndex = rand() % blocks.size();
    Block block = blocks[randomIndex];
    blocks.erase(blocks.begin() + randomIndex); 
    return block;
}
std::vector<Block> Game::GetBlocks(){
    return { IBlock(), LBlock(), JBlock(), OBlock(), TBlock(), SBlock(), ZBlock() };    
}

void Game::Draw(){
    grid.draw();
    currentBlock.Draw();
}