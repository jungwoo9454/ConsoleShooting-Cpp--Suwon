#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	bool isAlive;
	int x;
	int y;
	char body;
	WORD fColor;
	WORD bColor;

	void Update();
	void Draw();

	void Move();
	void Clipping();

	void Enable(int x, int y);
	void Disable();
};