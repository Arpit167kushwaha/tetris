#include <raylib.h>
#include "grid.h"
Color blue = {52, 152, 219,255};

int main(){
    InitWindow(400,900,"tetris");
    SetTargetFPS(120);
    Grid grid;
    grid.initialize();
    grid.print();
     while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(blue);

        EndDrawing();

     }
    CloseWindow(); 

}