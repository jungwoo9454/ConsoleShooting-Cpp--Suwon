#pragma once
class GameMng
{
public:
	GameMng();
	~GameMng();

	Player player;
	Bullet bullets[D_BULLET_MAX];
	Enemy enemys[D_ENEMY_MAX];
	DWORD createEnemyTime;


	void Update();
	void Draw();

	void CreateBullet(int x, int y);
	void CreateEnemy(int x, int y);
};