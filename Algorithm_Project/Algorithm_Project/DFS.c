#include "main.h"
#include "adjList.h"
#include "Stack.h"
#include "DFS.h"

void DFS_adjList(graphType* g, int v) {
	graphNode* w;
	top = NULL;
	push(v);		//DFS ���� ���� v => stack�� ����ֱ� ��
	g->visited[v] = TRUE;
	printf(" %c", v + 65);

	while (!isStackEmpty())
	{
		w = g->adjList_H[v];
		
		while (w)
		{
			if (!g->visited[w->vertex]) //w �湮 ����?
			{
				push(w->vertex);
				g->visited[w->vertex] = TRUE;
				printf(" -");
				printf(" %c", w->vertex + 65);

				v = w->vertex;
				w = g->adjList_H[v];
			}

			else //w �湮��?
			{
				w = w->link;
			}
		}
		v = pop();
	}
}