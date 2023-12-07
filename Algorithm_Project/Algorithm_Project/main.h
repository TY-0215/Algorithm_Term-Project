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

//1. 모든 상황에서 뒤로가기, 종료 구현
//2. 조작법 가이드 표기 (ex: 선택 = 엔터, 이동 = 방향키 등)
//3. 정렬되는 과정 직관적으로, 이해하기 쉽게 표현 ㄱㄱ
//4. 배열 크기와 원소 사용자가 입력 가능하게 ㄱㄱ