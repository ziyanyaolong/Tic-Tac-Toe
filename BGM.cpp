#include<stdio.h>
#include<stdint.h>
#include<graphics.h>
#include"qjsm.h"
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

void PlayBGM(void);
void cdxxsy(void);
void cdqdsy(void);
void StopBGM(void);


void PlayBGM(void)
{
	mciSendString("open ./res/777.mp3 alias BGM", 0, 0, 0);
	mciSendString("play BGM repeat", 0, 0, 0);
}

void cdxxsy(void)
{
	if(cd_sz_3) mciSendString("play ./res/²Ëµ¥Ñ¡Ïî¿òÉùÒô.wav", 0, 0, 0);
}

void cdqdsy(void)
{
	if (cd_sz_3) mciSendString("play ./res/cdqdsy.wav", 0, 0, 0);
}

void StopBGM(void)
{
	mciSendString("close BGM", 0, 0, 0);
}
