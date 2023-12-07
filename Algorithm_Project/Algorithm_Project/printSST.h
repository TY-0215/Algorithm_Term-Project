#pragma once
#include "main.h"

void printSST(void) {
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

	gotoxy(4, 4); printf("- 상태 공간 트리란?");
	gotoxy(4, 5); printf(": 문제 해결 과정의 중간 상태들을 모두 Node로 구현해놓은 트리이다.");

	gotoxy(6, 7); printf("상태 공간 트리의 Leaf Node는 해당 문제의 해(Solution)에 해당된다.");
	gotoxy(6, 8); printf("Optimum(최적해)는 Leaf Node 어딘가에 위치해 있고, 이를 효율적으로 찾아내는 것이 주요 이슈이다.");
}