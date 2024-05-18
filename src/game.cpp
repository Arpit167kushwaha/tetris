#include "game.h"
#include <vector>
#include <cstdlib> 
#include "blocks.cpp"
#include "grid.h" 
#include "position.h" 

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
void Game:: HandleInput(){
    int keyPressed = GetKeyPressed();
    switch (keyPressed)
    {
        case KEY_LEFT:
            MoveBlockLeft();
            break;
        case KEY_RIGHT:
            MoveBlockRight();
            break;
        case KEY_DOWN:  
            MoveBlockDown();
            break;
        case KEY_UP:
             RotateBlock();
             break;
       
    }
}
   void Game :: MoveBlockLeft()
   { 
    
     currentBlock.Move(0,-1);
     if (IsBlockOutside())
     {
       currentBlock.Move(0,1);
     } 

   }
   void Game :: MoveBlockRight()
   {
     currentBlock.Move(0,1);
     if (IsBlockOutside())
     {
       currentBlock.Move(0,-1);
     }

   }



void:: Game::MoveBlockDown()
{
    currentBlock.Move(1,0);
    if(IsBlockOutside())
    {
        currentBlock.Move(-1,0);
        LockBlock();
    }
}


bool Game::IsBlockOutside(){

    std::vector<Position> tiles = currentBlock.GetPosition();  
    for(Position item: tiles){
        if(grid.IsCelloutside(item.row, item.col)){
            return true;
        }
    }
    return false;
}
   
   void Game::RotateBlock()
   {
       currentBlock.Rotate();
       if(IsBlockOutside())
       {
           currentBlock.UndoRotation();
       } 
    
   }
    void Game::LockBlock()
    {
         std::vector<Position> tiles = currentBlock.GetPosition();
         for(Position item: tiles){
              grid.grid[item.row][item.col] = currentBlock.id;
         }
         currentBlock = nextBlock;
         nextBlock = GetRandomBlock();
    }