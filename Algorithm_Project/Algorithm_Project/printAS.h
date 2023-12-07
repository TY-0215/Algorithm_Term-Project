#pragma once
#include "main.h"

void printAS(void) {
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

	gotoxy(4, 4); printf("- A* 알고리즘이란?");
	gotoxy(4, 5); printf(": A* 알고리즘은 그래프의 시작점에서 도착점에 이르는 최단 경로를 찾는 알고리즘이다.");

	gotoxy(6, 7); printf("다익스트라 알고리즘을 확장하여 만들어진 경로 탐색 알고리즘으로,");
	gotoxy(6, 9); printf("현재 상태의 비용을 g(x), 현재 상태에서 다음 상태로 이동할 때의 휴리스틱 함수를 h(x)라고 할 때,");
	gotoxy(6, 10); printf("둘을 더한 f(x)=g(x)+h(x)가 최소가 되는 지점을 우선적으로 탐색하는 방법이다.");
}