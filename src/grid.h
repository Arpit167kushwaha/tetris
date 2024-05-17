#pragma once 

class Grid{
    public:
    Grid();
    int grid[30][20];
    void initialize();
    void print();

    private:
    int nrows;
    int ncols;
    int cellsize;
    

};