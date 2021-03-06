#pragma once

#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>


#define col GetStdHandle(STD_OUTPUT_HANDLE) // 嬬車但税 輩級舛左 閤奄

#define BLACK SetConsoleTextAttribute(col, 0x0000);
#define RED SetConsoleTextAttribute(col, 0x000c); // 察娃事
#define BLUE SetConsoleTextAttribute(col, 0x0001 | 0x0008); // 督空事
#define HIGH SetConsoleTextAttribute(col, 0x000a); // 尻砧事
#define WHITE SetConsoleTextAttribute(col, 0x000f); // 避事
#define SKY SetConsoleTextAttribute(col, 0x000b); // 馬潅事
#define YEL SetConsoleTextAttribute(col, 0x000e); // 葛櫛事
#define HIG SetConsoleTextAttribute(col, 0x000d); // 莫韻事
#define GOLD SetConsoleTextAttribute(col, 0x0006); // 榎事
#define JAJU SetConsoleTextAttribute(col, 0x0005); // 切爽事
#define PII SetConsoleTextAttribute(col, 0x0004); // 杷事
#define GREEN SetConsoleTextAttribute(col, 0x0002); // 褐事
#define VIO SetConsoleTextAttribute(col, 0x0001 | 0x0008 | 0x000c); // 左虞事
#define UP 72
#define DOWN 80 
#define LEFT 75 
#define RIGHT 77
#define ENTER 13

#pragma comment (lib,"winmm.lib")	

//////////////////////////////// 益軒奄 /////////////////////////////////////////
void removeCursor(void)
{ // 朕辞研 照左戚惟 廃陥

	CONSOLE_CURSOR_INFO curInfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
	curInfo.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
}
void gotoxy(int x, int y)
{
	COORD pos = { (short)x, (short)y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void textcolor(int fg_color, int bg_color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), fg_color | bg_color << 4);
}

void showCursor(void)
{ // 朕辞研 左戚惟 廃陥
	CONSOLE_CURSOR_INFO curInfo;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
	curInfo.bVisible = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
}

void cls(int bg_color, int text_color) // 鉢檎 走酔奄
{
	char cmd[100];
	int fg_color = 0;
	system("cls");
	sprintf_s(cmd, 100, "COLOR %x%x", bg_color, text_color);
	system(cmd);

}

char *aaaa[158] =
{
	{ "                                                                                                                                                  " }, //0 
	{ "                                                                                                                                                  " },
	{ "　　Γ   獣繊   ΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΔ　　　　　　　　　　　　Γ 　巴傾戚 　ΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΔ" },
	{ "　　Β                                                        Β　　　　　　　　　　　　Β　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　　Β                                                        Β　　　　　　　　　　　　Β　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　　Β    追遣斗戚疑 : 鉢詞妊 図楕 獄動引 神献楕 獄動         Β　　　　　　　　　　　　Β　　　　　　　　　　　　　　　　　　　　　　　　　　Β" }, //5
	{ "　　Β  　             乞砧 戚遂馬食 政煽税 紗亀研            Β　　　　　　　　　　　　Β　　                                          　　　Β" },
	{ "　　Β  　             繕箭拝 呪 赤柔艦陥.                    Β　　　　　　　　　　　　Β　　　　　　　　 　                             　　Β" },
	{ "　　Β  　                                                    Β　　　　　　　　　　　　Β　　　　　　　　　                                　Β" },
	{ "　　Β   　                                                   Β　　　　　　　　　　　　Β　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　　Β    　                                                  Β　　　　　　　　　　　　Β　　　　　　　　　　　　　　　　　　　　　　　　　　Β" }, //10
	{ "　　Β  　≠ 原酔什 : 原酔什研 戚遂背 図楕 獄動 適遣 板       Β　　　　　　　　　　　　Β　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　　Β   　           球掘益研 馬惟鞠檎 図楕 神献楕生稽       Β　　　　　　　　　　　　Β　　　　　　　 　　　　　 　　　　　 　　　　　   　Β" },
	{ "　　Β    　          獣繊聖 痕鉢獣迭 呪 赤柔艦陥.            Β　　　　　　　　　　　　Β　　　　　　　　　　　　　　 　　　　　 　　　  　　Β" },
	{ "　　Β     　                                                 Β　　　　　　　　　　　　Β　　　　　　　　       　　　　　 　 　 　     　 　Β" },
	{ "　　Β   　                                                   Β　　　　　　　　　　　　Β　　　　　　　　　 　　　　　 　　　　　 　　　　   Β" }, //15
	{ "　　Β 　                                                     Β　　　　　　　　　　　　Β　　　　　　　　　 　　　　　 　　　　　  　　　　  Β" },
	{ "　　Β 　 ≠ 徹左球 1. 'w', 's' 獄動聖 搭背 朝五虞税 y逐      Β　　　　　　　　　　　　Β　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　　Β   　            是帖研 繕箭拝 呪 赤柔艦陥.             Β　　　　　　　　　　　　Β　　                                           　 　Β" },
	{ "　　Β     　       2. 'a', 'd' 獄動聖 搭背 朝五虞税 z逐      Β　　　　　　　　　　　　Β　　　　　　　　                     　　　　　　 　Β" },
	{ "　　Β                 是帖研 繕箭拝 呪 赤柔艦陥.             Β　　　　　　　　　　　　Β　　　　　　　  　                       　　　　　 Β" }, // 20
	{ "　　Β                                                        Β　　　　　　　　　　　　Β　　　　　　　  　                                　Β" },
	{ "　　Β                                                        Β　　　　　　　　　　　　Β　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　　Β                                                        Β　　　　　　　　　　　　Β　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　　Β                                                        Β　　　　　　　　　　　　Β　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　　ΖΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΕ　　　　　　　　　　　　ΖΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΕ" }, //25
	{ "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" },
	{ "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" },
	{ "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" },
	{ "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" },
	{ "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" }, //30
	{ "　ΓΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΔ" },
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" }, //35
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },  //40
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" }, //45
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　Β　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　Β" },
	{ "　ΖΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΑΕ" },

};

void intro_start()
{
	system("mode con: cols=160 lines=58");				// 惟績 但(嬬車但) 滴奄研 郊蚊捜
	printf("惟績 竺誤 \n");
	for (int i = 0;i < 50;i++)
	{
		WHITE;
		gotoxy(1, i);
		printf("%s", aaaa[i]);
	}
	GREEN; gotoxy(8, 33); printf("益掘波什 賭 覗稽詮闘");
	BLUE; gotoxy(8, 35); printf("陳濃斗 因俳引");
	GOLD; gotoxy(8, 37); printf("1392056 沿層費");

	SKY; gotoxy(8, 40); printf("鉢詞妊 徹研 搭背 政煽税 紗亀研 繕箭背 乞窮 旋級聖 薦帖壱 亀鐸走拭 亜舌 察軒 亀鐸馬檎 戚奄澗 惟績脊艦陥.");
	SKY; gotoxy(8, 42); printf("政煽税 紗亀澗 切疑生稽 繕榎梢 汗形増艦陥.\n");
	removeCursor();
}