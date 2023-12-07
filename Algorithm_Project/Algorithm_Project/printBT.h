#pragma once
#include "main.h"

void printBT(void) {
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

	gotoxy(4, 4); printf("- 백트랙킹이란?");
	gotoxy(4, 5); printf(": 백트래킹은 주어진 상태 공간 트리를 트리의 루트에서 시작해서");
	gotoxy(6, 6); printf("DFS 방식으로 탐색을 해 나가는 방식이다.");

	gotoxy(6, 8); printf("탐색을 진행하다가 더 이상 진행할 수 없다면, 왔던 길을 되돌아가 다른 길을 찾는다.");

	gotoxy(6, 10); printf("백트래킹 알고리즘들이 모두 상태 공간 트리를 실제로 구성하여 수행하는 것은 아니지만,");
	gotoxy(6, 11); printf("백트래킹의 진행 과정은 상태 공간 트리의 Root부터 Leaf까지"); 
	gotoxy(6, 12); printf("DFS 방식으로 탐색하는 것과 논리적으로 동일하다.");
}