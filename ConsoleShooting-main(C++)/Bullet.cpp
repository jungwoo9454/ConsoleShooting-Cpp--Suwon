#include "include.h"
Bullet bullets[D_BULLET_MAX];

Bullet::Bullet()
{
	x = 0;
	y = 0;
	body = '|';
	fColor = GREEN;
	bColor = BLACK;
	isAlive = false;
}

Bullet::~Bullet()
{
}

void Bullet::Update()
{
	if (isAlive)
	{
		Move();
		Clipping();
	}
}

void Bullet::Draw()
{
	DrawChar(x, y, body, fColor, bColor);
}

void Bullet::Move()
{
}

void Bullet::Clipping()
{
}

void Bullet::Enable(int x, int y)
{
	this->x = x;
	this->y = y;
	isAlive = true;
}

void Bullet::Disable()
{
	isAlive = false;
}

void CreateBullet(int x, int y)
{
}
