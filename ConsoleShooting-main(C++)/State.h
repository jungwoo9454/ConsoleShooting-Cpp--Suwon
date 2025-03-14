#pragma once
// FSM - 유한상태기계
// 씬 -> 장면
// 메뉴 - 로고, UI
// 인게임 - 캐릭터, 총알, 적기
// 결과창 - UI, 점수

// 상태 클래스^^
class CState
{
public:
	int			m_nStateIndex;		// 현재 State 인덱스
	CState*		m_pCurState;		// 현재 State 포인터(자기자신)

public:
	CState();
	~CState();

public:
	//	순수 가상 함수
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Exit() = 0;

};