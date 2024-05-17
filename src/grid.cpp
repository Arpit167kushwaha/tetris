#include "grid.h"
#include<iostream>
using namespace std;
Grid::Grid(){
    nrows = 20;
    ncols = 10;
    cellsize = 30;

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