#pragma once
#include "raylib/include/raylib.h"

class Entity
{
public:
	Entity();
	void Draw();
	void SetPositionV(Vector2 position);
	void SetPositionF(float x, float y);
	Vector2 GetPosition();
	void MoveX(float speed);
	void MoveY(float speed);
	void SetSpeed(float speed);
	float GetSpeed();
	void SetWidth(int width);
	int GetWidth();
	void SetHeight(int height);
	int GetHeight();
private:
	double health{};
	float speed{};
	Vector2 position{};
	int width{};
	int height{};
	Texture2D sprite_dropShadow{};
};

