#include <raylib.h>
#include "game.h"


double lastUpdateTime = 0;
bool EventTriggered(double intervel)
{
    double currentTime = GetTime();
    if(currentTime - lastUpdateTime >= intervel)
    {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}
int main(){
    InitWindow(300,600,"tetris");
    SetTargetFPS(60);

    Game game = Game();
     while(WindowShouldClose() == false)
     {
        game.HandleInput();
        if(EventTriggered(0.5))
        {
    
            game.MoveBlockDown();
    
        }
        BeginDrawing();
        ClearBackground(DARKBLUE);
        game.Draw();
        EndDrawing();

     }
    CloseWindow(); 

}