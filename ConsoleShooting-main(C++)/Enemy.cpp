#include "include.h"

Enemy::Enemy()
{
	x = 0;
	y = 0;
	body = ' ';
	fColor = RED;
	bColor = RED;
	isAlive = false;
}

Enemy::~Enemy()
{
}

void Enemy::Update()
{
	if (isAlive)
	{
		Move();
		Clipping();
	}
}

void Enemy::Draw()
{
	if (isAlive)
		DrawChar(x, y, body, fColor, bColor);
}

void Enemy::Move()
{
	y++;
}

void Enemy::Clipping()
{
	if (y > 29)
		Disable();
}

void Enemy::Enable(int x, int y)
{
	this->x = x;
	this->y = y;
	isAlive = true;
}

void Enemy::Disable()
{
	isAlive = false;
}
