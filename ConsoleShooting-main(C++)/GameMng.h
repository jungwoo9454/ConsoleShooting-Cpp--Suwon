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


	void Update();
	void Draw();
};