#include<stdio.h>
#include<stdint.h>
#include<graphics.h>
#include"qjsm.h"
#include"Class1.h"
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

void PlayBGM();
void cdxxsy();
void cdqdsy();
void StopBGM();


void PlayBGM()
{
	mciSendString("open ./res/777.mp3 alias BGM", 0, 0, 0);
	mciSendString("play BGM repeat", 0, 0, 0);
}

void cdxxsy()
{
	if (sounds.sz_back(0, 1)) mciSendString("play ./res/²Ëµ¥Ñ¡Ïî¿òÉùÒô.wav", 0, 0, 0);
}

void cdqdsy()
{
	if (sounds.sz_back(0, 1)) mciSendString("play ./res/cdqdsy.wav", 0, 0, 0);
}

void StopBGM()
{
	mciSendString("close BGM", 0, 0, 0);
}
