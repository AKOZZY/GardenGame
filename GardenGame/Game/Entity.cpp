#include "Entity.h"

Entity::Entity()
{
	sprite_dropShadow = LoadTexture("assets/dropshadow.png");
}

void Entity::Draw()
{
	DrawTexture(sprite_dropShadow, position.x, position.y + 5, Color{ 255, 255, 255, 100 });
	DrawRectangle(position.x - width / 2, position.y - height / 2, width, height, WHITE);
	DrawCircle(position.x, position.y, 5, RED);
}

void Entity::SetPositionV(Vector2 position)
{
	this->position = position;
}

void Entity::SetPositionF(float x, float y)
{
	this->position.x = x;
	this->position.y = y;
}

Vector2 Entity::GetPosition()
{
	return position;
}

void Entity::MoveX(float speed)
{
	this->position.x += 1 * speed * GetFrameTime();
}

void Entity::MoveY(float speed)
{
	this->position.y += 1 * speed * GetFrameTime();
}

void Entity::SetSpeed(float speed)
{
	this->speed = speed;
}

float Entity::GetSpeed()
{
	return speed;
}

void Entity::SetWidth(int width)
{
	this->width = width;
}

int Entity::GetWidth()
{
	return width;
}

void Entity::SetHeight(int height)
{
	this->height = height;
}

int Entity::GetHeight()
{
	return height;
}
