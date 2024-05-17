#include <raylib.h>
#include "game.h"

int main(){
    InitWindow(300,600,"tetris");
    SetTargetFPS(120);

    Game game = Game();
     while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(DARKBLUE);
        game.Draw();


        EndDrawing();

     }
    CloseWindow(); 

}