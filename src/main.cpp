#include <raylib.h>
#include "grid.h"
Color blue = {52, 152, 219,255};

int main(){
    InitWindow(300,600,"tetris");
    SetTargetFPS(120);
    Grid grid;
    grid.initialize();
    grid.print();
     while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(blue);
        grid.draw();

        EndDrawing();

     }
    CloseWindow(); 

}