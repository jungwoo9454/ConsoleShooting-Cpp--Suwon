#include "include.h"
// ���α׷��� ���
// ���̺귯��(stdio.h, stdlib.h, fmod)
// �����ӿ�ũ - �ְܼ���, DXUT
// �� - ����Ƽ, �𸮾�, ���伥, ����, ����
// API - Windows.h, opgg

int main()
{
	Init();

	while (true)
	{
		Update();
		Draw();

		EngineSync(30);
	}

	Release();

	return 0;
}