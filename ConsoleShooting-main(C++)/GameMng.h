#pragma once

// ��� -> �ߺ� �ڵ� ����
// �̱��� -> GameMng ���׷��̵�
// ���ѻ��±��(FSM) -> �޴�ȭ��,����ȭ��
// FMOD -> ����
// �ڷᱸ��(����,ť,����Ʈ) ����
// ������Ʈ Ǯ�� ���׷��̵�

class GameMng : public Singleton<GameMng>
{
public:
	GameMng();
	~GameMng();

	CStateCtrl stateCtrl;

	Player player;
	Bullet bullets[D_BULLET_MAX];
	Enemy enemys[D_ENEMY_MAX];
	Effect effects[D_EFFECT_MAX];
	Text text;

	DWORD createEnemyTime;


	void Update();
	void Draw();

	void EnemyBulletCollision();

	void CreateBullet(int x, int y);
	void CreateEnemy(int x, int y);
	void CreateEffect(int x, int y);
};