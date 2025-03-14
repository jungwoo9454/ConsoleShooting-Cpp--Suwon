#include <stdio.h>
#include <Windows.h>	//win32 API
#include <time.h>
#include <string>
#include <sstream>
#include <fmod.hpp>

#include "Define.h"
#include "Singleton.h"


#include "Unit.h"

#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"
#include "Effect.h"

#include "Text.h"

#include "State.h"
#include "StateCtrl.h"

#include "Sound.h"

#include "MenuState.h"
#include "GameState.h"

#include "GameMng.h"

void Init();
void Update();
void Draw();
void Release();

void DrawStr(int x, int y, const char* str, WORD fcolor, WORD bcolor);
void DrawChar(int x, int y, const char c, WORD fcolor, WORD bcolor);
void EngineSync(int fps);
void ClearScreen();
void Flip();
