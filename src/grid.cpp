#include "grid.h"
#include<iostream>
using namespace std;
Grid::Grid(){
    nrows = 20;
    ncols = 10;
    cellsize = 30;
    colors = getcolors();

}

void Grid::initialize(){
    for(int row = 0 ; row < nrows; row++){
        for(int col = 0 ; col<ncols ; col++){
            grid[row][col] = 0;
        }
    }
    
    
    
}

void Grid::print(){
        for(int row = 0 ; row < nrows; row++){
        for(int col = 0 ; col<ncols ; col++){
            cout<<grid[row][col]<<" ";
        }
        cout<<"\n";
    }
}


void Grid::draw(){
    // Initialize the grid array before accessing its elements
    initialize();
    
    for(int row = 0 ; row < nrows; row++){
        for(int col = 0 ; col<ncols ; col++){
                int cellvalue = grid[row][col];
                DrawRectangle(col*cellsize+1,row*cellsize+1,cellsize-1,cellsize-1,colors[cellvalue]);
            
        }
    }
}


bool Grid::IsCelloutside(int row, int col){

    if( row>=0 && row<nrows && col>=0 && col<ncols)
    {
        return false;
    }
    return true;
}