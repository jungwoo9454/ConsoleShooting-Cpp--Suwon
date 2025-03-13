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

	FMOD::System* system;	//FMOD ���� �Ŵ���
	Sound bulletSnd;
	Sound backgroundSnd;

	void Init();

	void Update();
	void Draw();
};