#include "include.h"

GameMng::GameMng()
{
	createEnemyTime = 0;
}

GameMng::~GameMng()
{
}

void GameMng::Update()
{
	player.Update();
	for (int i = 0;i < D_BULLET_MAX;i++)
		bullets[i].Update();

	for (int i = 0;i < D_ENEMY_MAX;i++)
		enemys[i].Update();

	if (createEnemyTime < GetTickCount())
	{
		createEnemyTime = GetTickCount() + 500;
		CreateEnemy(rand() % 120, 0);
	}
}

void GameMng::Draw()
{
	player.Draw();
	for (int i = 0;i < D_BULLET_MAX;i++)
		bullets[i].Draw();

	for (int i = 0;i < D_ENEMY_MAX;i++)
		enemys[i].Draw();
}

void GameMng::CreateBullet(int x, int y)
{
	for (int i = 0;i < D_BULLET_MAX;i++)
	{
		if (bullets[i].isAlive == false)
		{
			bullets[i].Enable(x, y);
			break;
		}
	}
}

void GameMng::CreateEnemy(int x, int y)
{
	for (int i = 0;i < D_ENEMY_MAX;i++)
	{
		if (enemys[i].isAlive == false)
		{
			enemys[i].Enable(x, y);
			break;
		}
	}
}
