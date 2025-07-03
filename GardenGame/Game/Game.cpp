#include "Game.h"

Game::Game()
{
    // Window settings
    const int screenWidth = 800;
    const int screenHeight = 800;
    InitWindow(screenWidth, screenHeight, "Garden Game");
    SetTargetFPS(60);

    // Create shop and sell zones
    shop = LoadTexture("assets/area.png");
    sell = LoadTexture("assets/area.png");

    // Create the player
    player = new Entity();
    player->SetSpeed(100);
    player->SetPositionF(screenWidth / 2, screenHeight / 2);
    player->SetWidth(32);
    player->SetHeight(32);
}

Game::~Game()
{
    std::cout << "Deleted player object" << "\n";
    delete(player);
    std::cout << "Finished cleanup" << "\n";
}

void Game::Update()
{
    if (IsKeyDown(KEY_W)) player->MoveY(-player->GetSpeed());
    if (IsKeyDown(KEY_A)) player->MoveX(-player->GetSpeed());
    if (IsKeyDown(KEY_S)) player->MoveY(player->GetSpeed());
    if (IsKeyDown(KEY_D)) player->MoveX(player->GetSpeed());
}

void Game::Render()
{
    DrawTexture(shop, 25, 0, BLUE);
    DrawTexture(sell, 475, 0, RED);
    player->Draw();
}
