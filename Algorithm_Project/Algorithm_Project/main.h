#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <stralign.h>
#include <conio.h>
#define ENTER 13
#define LEFT 75
#define RIGHT 77
#define BACK 8
#define ESC 27


#define pause system("pause > nul")
#define cls system("cls")


void SetColor(int color);
void CursorView(char show);
void gotoxy(int x, int y);
int KeyControl();

//1. ��� ��Ȳ���� �ڷΰ���, ���� ����
//2. ���۹� ���̵� ǥ�� (ex: ���� = ����, �̵� = ����Ű ��)
//3. ���ĵǴ� ���� ����������, �����ϱ� ���� ǥ�� ����
//4. �迭 ũ��� ���� ����ڰ� �Է� �����ϰ� ����