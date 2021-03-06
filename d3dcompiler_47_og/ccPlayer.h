#pragma once

#include <stdio.h>
#include <windows.h>

using namespace std;

namespace moddingApi
{
	class ccPlayer
	{
	public:
		static void ccPlayer::Loop();

		static uintptr_t ccPlayer::GetPlayerStatus(int n);
		static uintptr_t ccPlayer::GetPlayerInfo(int n);
		static int ccPlayer::GetPlayerStatusNumber(uintptr_t s);
		static int ccPlayer::GetPlayerInfoNumber(uintptr_t s);

		static float ccPlayer::GetPlayerFloatProperty(uintptr_t p, uintptr_t s, char* prop);
		static void ccPlayer::SetPlayerFloatProperty(uintptr_t p, uintptr_t s, char* prop, float value);
	};
}