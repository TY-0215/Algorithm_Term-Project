#include "printDFS.h"

void printDFS(void) {
	int i;
	graphType* G0;
	G0 = (graphType*)malloc(sizeof(graphType));
	createGraph(G0);

	for (i = 0; i < 7; i++)
		insertVertex(G0, i);
	insertEdge(G0, 0, 2);
	insertEdge(G0, 0, 1);
	insertEdge(G0, 1, 4);
	insertEdge(G0, 1, 3);
	insertEdge(G0, 1, 0);
	insertEdge(G0, 2, 4);
	insertEdge(G0, 2, 0);
	insertEdge(G0, 3, 6);
	insertEdge(G0, 3, 1);
	insertEdge(G0, 4, 6);
	insertEdge(G0, 4, 2);
	insertEdge(G0, 4, 1);
	insertEdge(G0, 5, 6);
	insertEdge(G0, 6, 5);
	insertEdge(G0, 6, 4);
	insertEdge(G0, 6, 3);
	printf("\n G0의 인접 리스트 ");
	print_adjList(G0);

	printf("\n\n____________________________________________\n\n깊이 우선 탐색 >> ");
	DFS_adjList(G0, 0);

	int POS = 0;
	CursorView(0);
	system("COLOR 0F");

	gotoxy(75, 13); printf("Press The Enter");

	SetColor(3);
	gotoxy(80, 2); printf("[ A ]");
	SetColor(15);
	gotoxy(78, 3); printf("↙");
	gotoxy(85, 3); printf("↘");
	gotoxy(75, 4); printf("[ B ]");
	gotoxy(85, 4); printf("[ C ]");
	gotoxy(73, 5); printf("↙");
	gotoxy(79, 5); printf("↘"); 
	gotoxy(84, 5); printf("↙");

	gotoxy(70, 6); printf("[ D ]");
	gotoxy(80, 6); printf("[ E ]");
	gotoxy(90, 6); printf("[ F ]");
	gotoxy(73, 7); printf("↘");
	gotoxy(82, 7); printf("↓");
	gotoxy(90, 7); printf("↙");
	gotoxy(75, 8); printf("↘");
	gotoxy(82, 8); printf("↓");
	gotoxy(88, 8); printf("↙");
	gotoxy(77, 9); printf("↘");
	gotoxy(82, 9); printf("↓");
	gotoxy(86, 9); printf("↙");
	gotoxy(79, 10); printf("↘");
	gotoxy(82, 10); printf("↓");
	gotoxy(84, 10); printf("↙");
	gotoxy(80, 11); printf("[ G ]");

	while (1) {
		int key = KeyControl();
		if (key == ENTER)
			POS++;
		if (POS == 0)
		{
			SetColor(3);
			gotoxy(80, 2); printf("[ A ]");
			SetColor(15);
			gotoxy(78, 3); printf("↙");
			gotoxy(85, 3); printf("↘");
			gotoxy(75, 4); printf("[ B ]");
			gotoxy(85, 4); printf("[ C ]");
			gotoxy(73, 5); printf("↙");
			gotoxy(79, 5); printf("↘");
			gotoxy(84, 5); printf("↙");

			gotoxy(70, 6); printf("[ D ]");
			gotoxy(80, 6); printf("[ E ]");
			gotoxy(90, 6); printf("[ F ]");
			gotoxy(73, 7); printf("↘");
			gotoxy(82, 7); printf("↓");
			gotoxy(90, 7); printf("↙");
			gotoxy(75, 8); printf("↘");
			gotoxy(82, 8); printf("↓");
			gotoxy(88, 8); printf("↙");
			gotoxy(77, 9); printf("↘");
			gotoxy(82, 9); printf("↓");
			gotoxy(86, 9); printf("↙");
			gotoxy(79, 10); printf("↘");
			gotoxy(82, 10); printf("↓");
			gotoxy(84, 10); printf("↙");
			gotoxy(80, 11); printf("[ G ]");
		}
		else if (POS == 1)
		{
			SetColor(3);
			gotoxy(80, 2); printf("[ A ]");
			gotoxy(78, 3); printf("↙");
			gotoxy(75, 4); printf("[ B ]");
			SetColor(15);
			gotoxy(85, 3); printf("↘");
			gotoxy(85, 4); printf("[ C ]");
			gotoxy(73, 5); printf("↙");
			gotoxy(79, 5); printf("↘");
			gotoxy(84, 5); printf("↙");

			gotoxy(70, 6); printf("[ D ]");
			gotoxy(80, 6); printf("[ E ]");
			gotoxy(90, 6); printf("[ F ]");
			gotoxy(73, 7); printf("↘");
			gotoxy(82, 7); printf("↓");
			gotoxy(90, 7); printf("↙");
			gotoxy(75, 8); printf("↘");
			gotoxy(82, 8); printf("↓");
			gotoxy(88, 8); printf("↙");
			gotoxy(77, 9); printf("↘");
			gotoxy(82, 9); printf("↓");
			gotoxy(86, 9); printf("↙");
			gotoxy(79, 10); printf("↘");
			gotoxy(82, 10); printf("↓");
			gotoxy(84, 10); printf("↙");
			gotoxy(80, 11); printf("[ G ]");
		}
		else if (POS == 2)
		{
			SetColor(3);
			gotoxy(80, 2); printf("[ A ]");
			gotoxy(78, 3); printf("↙");
			gotoxy(75, 4); printf("[ B ]");
			gotoxy(73, 5); printf("↙");
			gotoxy(70, 6); printf("[ D ]");
			SetColor(15);
			gotoxy(85, 3); printf("↘");
			gotoxy(85, 4); printf("[ C ]");
			gotoxy(79, 5); printf("↘");
			gotoxy(84, 5); printf("↙");
			gotoxy(80, 6); printf("[ E ]");
			gotoxy(90, 6); printf("[ F ]");
			gotoxy(73, 7); printf("↘");
			gotoxy(82, 7); printf("↓");
			gotoxy(90, 7); printf("↙");
			gotoxy(75, 8); printf("↘");
			gotoxy(82, 8); printf("↓");
			gotoxy(88, 8); printf("↙");
			gotoxy(77, 9); printf("↘");
			gotoxy(82, 9); printf("↓");
			gotoxy(86, 9); printf("↙");
			gotoxy(79, 10); printf("↘");
			gotoxy(82, 10); printf("↓");
			gotoxy(84, 10); printf("↙");
			gotoxy(80, 11); printf("[ G ]");
		}
		else if (POS == 3)
		{
			SetColor(3);
			gotoxy(80, 2); printf("[ A ]");
			gotoxy(78, 3); printf("↙");
			gotoxy(75, 4); printf("[ B ]");
			gotoxy(73, 5); printf("↙");
			gotoxy(70, 6); printf("[ D ]");
			gotoxy(73, 7); printf("↘");
			gotoxy(75, 8); printf("↘");
			gotoxy(77, 9); printf("↘");
			gotoxy(79, 10); printf("↘");
			gotoxy(80, 11); printf("[ G ]");
			SetColor(15);
			gotoxy(85, 3); printf("↘");
			gotoxy(85, 4); printf("[ C ]");
			gotoxy(79, 5); printf("↘");
			gotoxy(84, 5); printf("↙");

			gotoxy(80, 6); printf("[ E ]");
			gotoxy(90, 6); printf("[ F ]");
			gotoxy(82, 7); printf("↓");
			gotoxy(90, 7); printf("↙");
			gotoxy(82, 8); printf("↓");
			gotoxy(88, 8); printf("↙");
			gotoxy(82, 9); printf("↓");
			gotoxy(86, 9); printf("↙");
			gotoxy(82, 10); printf("↓");
			gotoxy(84, 10); printf("↙");
		}
		else if (POS == 4)
		{
			SetColor(3);
			gotoxy(80, 2); printf("[ A ]");
			gotoxy(78, 3); printf("↙");
			gotoxy(75, 4); printf("[ B ]");
			gotoxy(73, 5); printf("↙");
			gotoxy(70, 6); printf("[ D ]");
			gotoxy(73, 7); printf("↘");
			gotoxy(75, 8); printf("↘");
			gotoxy(77, 9); printf("↘");
			gotoxy(79, 10); printf("↘");
			gotoxy(80, 11); printf("[ G ]");
			gotoxy(82, 7); printf("↑");
			gotoxy(82, 8); printf("↑");
			gotoxy(82, 9); printf("↑");
			gotoxy(82, 10); printf("↑");
			gotoxy(80, 6); printf("[ E ]");
			SetColor(15);
			gotoxy(85, 3); printf("↘");
			gotoxy(85, 4); printf("[ C ]");
			gotoxy(79, 5); printf("↘");
			gotoxy(84, 5); printf("↙");

			gotoxy(90, 6); printf("[ F ]");
			gotoxy(90, 7); printf("↙");
			gotoxy(88, 8); printf("↙");
			gotoxy(86, 9); printf("↙");
			gotoxy(84, 10); printf("↙");
		}
		else if (POS == 5)
		{
			SetColor(3);
			gotoxy(80, 2); printf("[ A ]");
			gotoxy(78, 3); printf("↙");
			gotoxy(75, 4); printf("[ B ]");
			gotoxy(73, 5); printf("↙");
			gotoxy(70, 6); printf("[ D ]");
			gotoxy(73, 7); printf("↘");
			gotoxy(75, 8); printf("↘");
			gotoxy(77, 9); printf("↘");
			gotoxy(79, 10); printf("↘");
			gotoxy(80, 11); printf("[ G ]");
			gotoxy(82, 7); printf("↑");
			gotoxy(82, 8); printf("↑");
			gotoxy(82, 9); printf("↑");
			gotoxy(82, 10); printf("↑");
			gotoxy(80, 6); printf("[ E ]");
			gotoxy(84, 5); printf("↗");
			gotoxy(85, 4); printf("[ C ]");
			SetColor(15);
			gotoxy(85, 3); printf("↘");
			gotoxy(79, 5); printf("↘");
			gotoxy(90, 6); printf("[ F ]");
			gotoxy(90, 7); printf("↙");
			gotoxy(88, 8); printf("↙");
			gotoxy(86, 9); printf("↙");
			gotoxy(84, 10); printf("↙");
		}
		else if (POS == 6)
		{
			SetColor(3);
			gotoxy(80, 2); printf("[ A ]");
			gotoxy(78, 3); printf("↙");
			gotoxy(75, 4); printf("[ B ]");
			gotoxy(73, 5); printf("↙");
			gotoxy(70, 6); printf("[ D ]");
			gotoxy(73, 7); printf("↘");
			gotoxy(75, 8); printf("↘");
			gotoxy(77, 9); printf("↘");
			gotoxy(79, 10); printf("↘");
			gotoxy(80, 11); printf("[ G ]");
			gotoxy(82, 7); printf("↑");
			gotoxy(82, 8); printf("↑");
			gotoxy(82, 9); printf("↑");
			gotoxy(82, 10); printf("↑");
			gotoxy(80, 6); printf("[ E ]");
			gotoxy(84, 5); printf("↗");
			gotoxy(85, 4); printf("[ C ]");
			gotoxy(90, 7); printf("↗");
			gotoxy(88, 8); printf("↗");
			gotoxy(86, 9); printf("↗");
			gotoxy(84, 10); printf("↗");
			gotoxy(90, 6); printf("[ F ]");
			gotoxy(85, 3); printf("         ");
			gotoxy(79, 5); printf("    ");
			SetColor(15);
			}
		else if (POS == 7)
		{
			gotoxy(70, 13); printf("           End            ");
			return;
		}
	}
	return;
}