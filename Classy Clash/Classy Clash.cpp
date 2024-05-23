#include <iostream>
#include "raylib.h"

int main()
{
    InitWindow(800, 400, "Classy Clash");
    SetTargetFPS(60);
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);

        DrawText("Test", 400, 150, 40, RED);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
