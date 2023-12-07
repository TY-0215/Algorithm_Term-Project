#include "main.h"
#include "adjList.h"

void createGraph(graphType* g) {
	int v;
	g->n = 0;
	for ( v = 0; v < MAX_VERTEX; v++)
	{
		g->adjList_H[v] = NULL;
		g->visited[v] = FALSE;
	}
}

void insertVertex(graphType* g, int v) {
	if (((g->n) + 1) > MAX_VERTEX) {
		printf("\n그래프 정점 최대 개수를 초과했습니다.");
		return;
	}
	g->n++;
}

void insertEdge(graphType* g, int u, int v) {
	graphNode* node;

	if (u >= g->n || v >= g->n)
	{
		printf("\n 그래프에 없는 정점입니다.");
		return;
	}


	//정점 u의 첫 번째 노드로 v를 연결
	node = (graphNode*)malloc(sizeof(graphNode));
	node->vertex = v;
	node->link = g->adjList_H[u];
	g->adjList_H[u] = node;
}

void print_adjList(graphType* g) {
	int i;
	graphNode* p;
	for (i = 0; i < g->n; i++)
	{
		gotoxy(2, 2+i); printf("정점 %c의 인접 리스트", i + 65);
		p = g->adjList_H[i];

		while (p)
		{
			printf(" -> %c", p->vertex + 65);
			p = p->link;
		}
	}
}