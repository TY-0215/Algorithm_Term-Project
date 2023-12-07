#pragma once
#include "main.h"

void printTS(void) {
	printf("");
	puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");

	gotoxy(4, 4); printf("- 위상 정렬이란?");
	gotoxy(4, 5); printf(": 순서가 정해져있는 작업을 차례대로 수행해야 할 때, 순서를 결정해주기 위해 사용하는 알고리즘.");

	gotoxy(6, 7); printf("위상정렬은 기본적으로, 유향 그래프에서만 정의된다. 기본적으로 시작점이 존재해야 하기 때문이다.");

	gotoxy(6, 9); printf("또한, 위상 정렬이 성립하기 위해서는 반드시 그래프의 순환이 존재하지 않아야 한다.");
	gotoxy(6, 10); printf("즉, 그래프가 비순환 유향 그래프(directed acyclic graph)여야 한다."); 

}