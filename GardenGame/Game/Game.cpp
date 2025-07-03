#include "Game.h"

Game::Game()
{
    // Window settings
    const int screenWidth = 800;
    const int screenHeight = 800;
    InitWindow(screenWidth, screenHeight, "Garden Game");
    SetTargetFPS(60);

    player.SetSpeed(50);
    player.SetPositionF(screenWidth / 2, screenHeight / 2);
    player.SetWidth(32);
    player.SetHeight(32);
}

void Game::Update()
{
    if (IsKeyDown(KEY_W)) player.MoveY(-player.GetSpeed());
    if (IsKeyDown(KEY_A)) player.MoveX(-player.GetSpeed());
    if (IsKeyDown(KEY_S)) player.MoveY(player.GetSpeed());
    if (IsKeyDown(KEY_D)) player.MoveX(player.GetSpeed());
}

void Game::Render()
{
    player.Draw();
}
