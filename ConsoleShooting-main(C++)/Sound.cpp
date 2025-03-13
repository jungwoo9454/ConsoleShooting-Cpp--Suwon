#include "include.h"

Sound::Sound()
{
	sound = nullptr;
	channel = nullptr;
}

Sound::~Sound()
{
}

bool Sound::LoadSound(std::string path, bool isloop)
{
	if (GameMng::GetIns()->system != nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Sound::Play()
{

}

void Sound::Stop()
{

}
