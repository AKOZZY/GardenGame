#include "raylib/include/raylib.h"
#include "Game.h"

int main(void)
{
    Game* game = new Game();

    while (!WindowShouldClose())
    {
        game->Update();
        BeginDrawing();
        ClearBackground(DARKGREEN);
        game->Render();
        EndDrawing();
    }
    CloseWindow();
    delete(game);

    return 0;
}