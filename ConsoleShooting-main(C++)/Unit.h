#pragma once
class Unit
{
public:	// private, protected
	Unit();
	~Unit();

	bool isAlive;
	int x;
	int y;
	char body;
	WORD fColor;
	WORD bColor;

	virtual void Update();		//�����Լ�
	void Draw();

	virtual void Move();
	virtual void Clipping();

	void Enable(int x, int y);
	void Disable();
};