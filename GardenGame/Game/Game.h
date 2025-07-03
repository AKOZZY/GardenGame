#pragma once
#include "raylib/include/raylib.h"
#include "Entity.h"

class Game
{
public:
	Game();
	void Update();
	void Render();
private:
	Entity player{};
};

