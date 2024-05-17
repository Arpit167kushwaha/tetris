#include"block.h"

Block::Block(){
    cellsize = 30;
    rotationstate = 0;
    colors = getcolors();
}

void Block::Draw(){
    std::vector<Position> tiles = GetPosition();
    for(Position item : tiles){
        DrawRectangle(item.col*cellsize+1,item.row *cellsize +1 , cellsize-1,cellsize-1,colors[id]);
    }
}

void Block::Move(int dr, int dc){
   
        rowoffset += dr;
        coloffset += dc;
        
    
}

std::vector<Position> Block::GetPosition(){
    std::vector<Position> tiles = cells[rotationstate];
    std::vector<Position> movedTiles;
    for(Position item : tiles){
        Position newPos = Position(item.row + rowoffset , item.col + coloffset);
        movedTiles.push_back(newPos);
}
    return movedTiles;
}