#pragma once
class GameState : public CState
{
public:
	GameState();
	~GameState();

	void Start();
	void Update();
	void Draw();
	void Exit();
};