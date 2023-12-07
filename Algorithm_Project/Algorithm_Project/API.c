#include "main.h"

void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void CursorView(char show)
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

void gotoxy(int x, int y) {

	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int KeyControl() {
	int key = _getch();
	if (key == ENTER) { return ENTER; }
	else if (key == BACK) { return BACK; }
	else if (key == ESC) { return ESC; }

	else if (key == 224)
	{
		key = _getch();
		if (key == 75) {
			return key;
		}
		else if (key == 77)
		{
			return key;
		}
	}
	return 0;
}