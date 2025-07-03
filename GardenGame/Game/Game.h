#pragma once
#include <iostream>
#include "raylib/include/raylib.h"
#include "Entity.h"

class Game
{
public:
	Game();
	~Game();
	void Update();
	void Render();
private:
	Entity* player{};
	Texture2D shop{};
	Texture2D sell{};
};

