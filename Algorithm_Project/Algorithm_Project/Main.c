#include "main.h"
#include "PrintArray.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"
#include "RadixSort.h"
#include "CountingSort.h"
#include "printDFS.h"
#include "printBFS.h"

void mainPtr(void);
void mainMenu(void);
void sortPtr(void);
void sortMenu(void);
void graphPtr(void);
void graphMenu(void);


extern int merge_size;
extern int quick_size;
extern int quick_num;
extern int merge_num;


int main() {
	mainMenu();
	return 0;
}

void mainPtr(void) {
	system("mode con: cols=106 lines=18"); 
	system("title �˰��� - ����");

	gotoxy(42,2);
	printf("Algorithm Simulation");
	
	gotoxy(42, 6);
	printf("�޴� �̵� : <- / ->");
	gotoxy(42, 8);
	printf("�޴� ���� : Enter");


	printf("\n\n");
	puts("������������������������������������������������������");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	printf("������������������������������������������������������");
	gotoxy(21, 13); printf("[���� �˰���]");
	gotoxy(46, 13); printf("[�׷��� �˰���]");
	gotoxy(73, 13); printf("[�����ϱ�]");
	return;
}

void mainMenu(void) {

	int POS = 0;
	CursorView(0);
	system("COLOR 0F");
	mainPtr();

	SetColor(3);
	gotoxy(21, 13); printf("[���� �˰���]");
	SetColor(15);
	gotoxy(46, 13); printf("[�׷��� �˰���]");
	gotoxy(73, 13); printf("[�����ϱ�]");

	while (1) {
		int key = KeyControl();
		if (key == LEFT)
			if (POS == 0) POS = 2;
			else POS -= 1;
		else if (key == RIGHT)
			if (POS == 2) POS = 0;
			else POS += 1;
		else if (key == ENTER) //���͸� ������ ��
			break;

		switch (POS) {
		case 0:
			SetColor(3);
			gotoxy(21, 13); printf("[���� �˰���]");
			SetColor(15);
			gotoxy(46, 13); printf("[�׷��� �˰���]");
			gotoxy(73, 13); printf("[�����ϱ�]");
			break;
		case 1:
			gotoxy(21, 13); printf("[���� �˰���]");
			SetColor(3);
			gotoxy(46, 13); printf("[�׷��� �˰���]");
			SetColor(15);
			gotoxy(73, 13); printf("[�����ϱ�]");
			break;
		case 2:
			gotoxy(21, 13); printf("[���� �˰���]");
			gotoxy(46, 13); printf("[�׷��� �˰���]");
			SetColor(3);
			gotoxy(73, 13); printf("[�����ϱ�]");
			SetColor(15);
		default: break;
		}
		Sleep(200);
	}
	cls;

	if (POS == 0) { sortMenu(); cls; }
	else if (POS == 1) { graphMenu(); cls; }
	else if (POS == 2) {
		return;
	}
}

void sortPtr(void) {
	system("mode con: cols=106 lines=30"); 
	system("title �˰��� - ����");


	printf("");
	puts("������������������������������������������������������");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	printf("������������������������������������������������������");
	gotoxy(30, 5); printf("�� ���� ����");
	gotoxy(65, 5); printf("�� ���� ����");
	gotoxy(30, 8); printf("�� ���� ����");
	gotoxy(65, 8); printf("�� ���� ����");
	gotoxy(30, 11); printf("�� �� ����");
	gotoxy(65, 11); printf("�� �� ����");
	gotoxy(30, 14); printf("�� ��� ����");
	gotoxy(65, 14); printf("�� ��� ����");
	gotoxy(30, 17); printf("�� �ڷΰ���");
	gotoxy(65, 17); printf("�� �����ϱ�");

	gotoxy(44, 24); printf("�޴� �̵� : <- / ->");
	gotoxy(44, 26); printf("�޴� ���� : Enter");

	return;
}

void sortMenu(void) {
	int POS = 0;
	CursorView(0);
	system("COLOR 0F");
	sortPtr();

	SetColor(3);
	gotoxy(30, 5); printf("�� ���� ����");
	SetColor(15);
	gotoxy(65, 5); printf("�� ���� ����");
	gotoxy(30, 8); printf("�� ���� ����");
	gotoxy(65, 8); printf("�� ���� ����");
	gotoxy(30, 11); printf("�� �� ����");
	gotoxy(65, 11); printf("�� �� ����");
	gotoxy(30, 14); printf("�� ��� ����");
	gotoxy(65, 14); printf("�� ��� ����");
	gotoxy(30, 17); printf("�� �ڷΰ���");
	gotoxy(65, 17); printf("�� �����ϱ�");

	while (1) {
		int key = KeyControl();
		if (key == LEFT)
			if (POS == 0) POS = 9;
			else POS -= 1;
		else if (key == RIGHT)
			if (POS == 9) POS = 0;
			else POS += 1;
		else if (key == ENTER)
			break;

		switch (POS) {
		case 0:
			SetColor(3);
			gotoxy(30, 5); printf("�� ���� ����");
			SetColor(15);
			gotoxy(65, 5); printf("�� ���� ����");
			gotoxy(30, 8); printf("�� ���� ����");
			gotoxy(65, 8); printf("�� ���� ����");
			gotoxy(30, 11); printf("�� �� ����");
			gotoxy(65, 11); printf("�� �� ����");
			gotoxy(30, 14); printf("�� ��� ����");
			gotoxy(65, 14); printf("�� ��� ����");
			gotoxy(30, 17); printf("�� �ڷΰ���");
			gotoxy(65, 17); printf("�� �����ϱ�");
			break;
		case 1:
			gotoxy(30, 5); printf("�� ���� ����");
			SetColor(3);
			gotoxy(65, 5); printf("�� ���� ����");
			SetColor(15);
			gotoxy(30, 8); printf("�� ���� ����");
			gotoxy(65, 8); printf("�� ���� ����");
			gotoxy(30, 11); printf("�� �� ����");
			gotoxy(65, 11); printf("�� �� ����");
			gotoxy(30, 14); printf("�� ��� ����");
			gotoxy(65, 14); printf("�� ��� ����");
			gotoxy(30, 17); printf("�� �ڷΰ���");
			gotoxy(65, 17); printf("�� �����ϱ�");
			break;
		case 2:
			gotoxy(30, 5); printf("�� ���� ����");
			gotoxy(65, 5); printf("�� ���� ����");
			SetColor(3);
			gotoxy(30, 8); printf("�� ���� ����");
			SetColor(15);
			gotoxy(65, 8); printf("�� ���� ����");
			gotoxy(30, 11); printf("�� �� ����");
			gotoxy(65, 11); printf("�� �� ����");
			gotoxy(30, 14); printf("�� ��� ����");
			gotoxy(65, 14); printf("�� ��� ����");
			gotoxy(30, 17); printf("�� �ڷΰ���");
			gotoxy(65, 17); printf("�� �����ϱ�");
			break;
		case 3:
			gotoxy(30, 5); printf("�� ���� ����");
			gotoxy(65, 5); printf("�� ���� ����");
			gotoxy(30, 8); printf("�� ���� ����");
			SetColor(3);
			gotoxy(65, 8); printf("�� ���� ����");
			SetColor(15);
			gotoxy(30, 11); printf("�� �� ����");
			gotoxy(65, 11); printf("�� �� ����");
			gotoxy(30, 14); printf("�� ��� ����");
			gotoxy(65, 14); printf("�� ��� ����");
			gotoxy(30, 17); printf("�� �ڷΰ���");
			gotoxy(65, 17); printf("�� �����ϱ�");
			break;
		case 4:
			gotoxy(30, 5); printf("�� ���� ����");
			gotoxy(65, 5); printf("�� ���� ����");
			gotoxy(30, 8); printf("�� ���� ����");
			gotoxy(65, 8); printf("�� ���� ����");
			SetColor(3);
			gotoxy(30, 11); printf("�� �� ����");
			SetColor(15);
			gotoxy(65, 11); printf("�� �� ����");
			gotoxy(30, 14); printf("�� ��� ����");
			gotoxy(65, 14); printf("�� ��� ����");
			gotoxy(30, 17); printf("�� �ڷΰ���");
			gotoxy(65, 17); printf("�� �����ϱ�");
			break;
		case 5:
			gotoxy(30, 5); printf("�� ���� ����");
			gotoxy(65, 5); printf("�� ���� ����");
			gotoxy(30, 8); printf("�� ���� ����");
			gotoxy(65, 8); printf("�� ���� ����");
			gotoxy(30, 11); printf("�� �� ����");
			SetColor(3);
			gotoxy(65, 11); printf("�� �� ����");
			SetColor(15);
			gotoxy(30, 14); printf("�� ��� ����");
			gotoxy(65, 14); printf("�� ��� ����");
			gotoxy(30, 17); printf("�� �ڷΰ���");
			gotoxy(65, 17); printf("�� �����ϱ�");
			break;
		case 6:
			gotoxy(30, 5); printf("�� ���� ����");
			gotoxy(65, 5); printf("�� ���� ����");
			gotoxy(30, 8); printf("�� ���� ����");
			gotoxy(65, 8); printf("�� ���� ����");
			gotoxy(30, 11); printf("�� �� ����");
			gotoxy(65, 11); printf("�� �� ����");
			SetColor(3);
			gotoxy(30, 14); printf("�� ��� ����");
			SetColor(15);
			gotoxy(65, 14); printf("�� ��� ����");
			gotoxy(30, 17); printf("�� �ڷΰ���");
			gotoxy(65, 17); printf("�� �����ϱ�");
			break;
		case 7:
			gotoxy(30, 5); printf("�� ���� ����");
			gotoxy(65, 5); printf("�� ���� ����");
			gotoxy(30, 8); printf("�� ���� ����");
			gotoxy(65, 8); printf("�� ���� ����");
			gotoxy(30, 11); printf("�� �� ����");
			gotoxy(65, 11); printf("�� �� ����");
			gotoxy(30, 14); printf("�� ��� ����");
			SetColor(3);
			gotoxy(65, 14); printf("�� ��� ����");
			SetColor(15);
			gotoxy(30, 17); printf("�� �ڷΰ���");
			gotoxy(65, 17); printf("�� �����ϱ�");
			break;
		case 8:
			gotoxy(30, 5); printf("�� ���� ����");
			gotoxy(65, 5); printf("�� ���� ����");
			gotoxy(30, 8); printf("�� ���� ����");
			gotoxy(65, 8); printf("�� ���� ����");
			gotoxy(30, 11); printf("�� �� ����");
			gotoxy(65, 11); printf("�� �� ����");
			gotoxy(30, 14); printf("�� ��� ����");
			gotoxy(65, 14); printf("�� ��� ����");
			SetColor(3);
			gotoxy(30, 17); printf("�� �ڷΰ���");
			SetColor(15);
			gotoxy(65, 17); printf("�� �����ϱ�");
			break;
		case 9:
			gotoxy(30, 5); printf("�� ���� ����");
			gotoxy(65, 5); printf("�� ���� ����");
			gotoxy(30, 8); printf("�� ���� ����");
			gotoxy(65, 8); printf("�� ���� ����");
			gotoxy(30, 11); printf("�� �� ����");
			gotoxy(65, 11); printf("�� �� ����");
			gotoxy(30, 14); printf("�� ��� ����");
			gotoxy(65, 14); printf("�� ��� ����");
			gotoxy(30, 17); printf("�� �ڷΰ���");
			SetColor(3);
			gotoxy(65, 17); printf("�� �����ϱ�");
			SetColor(15);
			break;
			
		default: break;
		}
		Sleep(200);
	}
	cls;

	system("mode con: cols=106 lines=30");
	if (POS == 0) {
		BubbleSort();

		gotoxy(44, 24); printf("�ڷΰ��� : BackSpace");
		gotoxy(44, 26); printf("�����ϱ� : ESC");

		while (1) {
			if (KeyControl() == BACK) {
				cls;
				sortMenu();
				return;
			}
			else if (KeyControl() == ESC)
			{
				return;
			}
			else {
				continue;
			}
		}
	}

	else if (POS == 1)
	{
		InsertSort();

		gotoxy(44, 24); printf("�ڷΰ��� : BackSpace");
		gotoxy(44, 26); printf("�����ϱ� : ESC");

		while (1) {
			if (KeyControl() == BACK) {
				cls;
				sortMenu();
				return;
			}
			else if (KeyControl() == ESC)
			{
				return;
			}
			else {
				continue;
			}
		}
	}

	else if (POS == 2)
	{
		SelectionSort();

		gotoxy(44, 24); printf("�ڷΰ��� : BackSpace");
		gotoxy(44, 26); printf("�����ϱ� : ESC");

		while (1) {
			if (KeyControl() == BACK) {
				cls;
				sortMenu();
				return;
			}
			else if (KeyControl() == ESC)
			{
				return;
			}
			else {
				continue;
			}
		}
	}

	else if (POS == 3)
	{
		printf("���� ���� �˰��� �ùķ��̼�\n\n");

		printf("�迭�� ũ�⸦ �Է��ϼ���(�ڿ���) : ");
		scanf_s("%d", &merge_size);									

		int* arr = (int*)malloc(merge_size * sizeof(int));

		printf("�迭�� ���Ҹ� �Է��ϼ���(����� ����) : ");
		for (int i = 0; i < merge_size; i++) {
			scanf_s("%d", arr + i);
		}

		//���� �迭 ���
		printf("\n\n���� �迭 : [ ");
		for (int i = 0; i < merge_size; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("]\n\n");

		merge_num = 1;
		//���� ����
		MergeSort(arr, 0, merge_size-1);

		gotoxy(44, 24); printf("�ڷΰ��� : BackSpace");
		gotoxy(44, 26); printf("�����ϱ� : ESC");

		while (1) {
			if (KeyControl() == BACK) {
				cls;
				sortMenu();
				return;
			}
			else if (KeyControl() == ESC)
			{
				return;
			}
			else {
				continue;
			}
		}

		free(arr);
	}

	else if (POS == 4)
	{
		printf("�� ���� �˰��� �ùķ��̼�\n\n");
		
		printf("�迭�� ũ�⸦ �Է��ϼ���(�ڿ���) : ");

		int n = 0;
		scanf_s("%d", &n);									
		int* arr = (int*)malloc(n * sizeof(int));

		printf("�迭�� ���Ҹ� �Է��ϼ���(����� ����) : ");
		for (int i = 0; i < n; i++) {
			scanf_s("%d", arr + i);
		}

		//���� �迭 ���
		printf("\n\n���� �迭 : [ ");
		for (int i = 0; i < n; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("]\n\n\n");

		//���� ����
		HeapSort(arr, n - 1);

		gotoxy(44, 24); printf("�ڷΰ��� : BackSpace");
		gotoxy(44, 26); printf("�����ϱ� : ESC");

		while (1) {
			if (KeyControl() == BACK) {
				cls;
				sortMenu();
				return;
			}
			else if (KeyControl() == ESC)
			{
				return;
			}
			else {
				continue;
			}
		}
		free(arr);
	}

	else if (POS == 5)
	{
		printf("�� ���� �˰��� �ùķ��̼�\n\n");

		printf("�迭�� ũ�⸦ �Է��ϼ���(�ڿ���) : ");

		scanf_s("%d", &quick_size);
		int* arr = (int*)malloc(quick_size * sizeof(int));

		printf("�迭�� ���Ҹ� �Է��ϼ���(����� ����) : ");
		for (int i = 0; i < quick_size; i++) {
			scanf_s("%d", arr + i);
		}

		//���� �迭 ���
		printf("\n\n���� �迭 : [ ");
		for (int i = 0; i < quick_size; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("]\n\n\n");

		quick_num = 1;
		//���� ����
		QuickSort(arr, 0, quick_size - 1);

		gotoxy(44, 24); printf("�ڷΰ��� : BackSpace");
		gotoxy(44, 26); printf("�����ϱ� : ESC");

		while (1) {
			if (KeyControl() == BACK) {
				cls;
				sortMenu();
				return;
			}
			else if (KeyControl() == ESC)
			{
				return;
			}
			else {
				continue;
			}
		}
		free(arr);
	}

	else if (POS == 6)
	{
		
	}

	else if (POS == 7)
	{
		printf("��� ���� �˰��� �ùķ��̼�\n\n");

		printf("�迭�� ũ�⸦ �Է��ϼ���(�ڿ���) : ");

		int radix_size;
		scanf_s("%d", &radix_size);
		int* arr = (int*)malloc(radix_size * sizeof(int));

		printf("�迭�� ���Ҹ� �Է��ϼ���(����� ���� / �ִ� 4�ڸ�) : ");
		for (int i = 0; i < radix_size; i++) {
			scanf_s("%d", arr + i);
		}

		//���� �迭 ���
		printf("\n\n���� �迭 : [ ");
		for (int i = 0; i < radix_size; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("]\n\n\n");

		RadixSort(arr, radix_size);

		gotoxy(44, 24); printf("�ڷΰ��� : BackSpace");
		gotoxy(44, 26); printf("�����ϱ� : ESC");

		while (1) {
			if (KeyControl() == BACK) {
				cls;
				sortMenu();
				return;
			}
			else if (KeyControl() == ESC)
			{
				return;
			}
			else {
				continue;
			}
		}
		free(arr);
	}

	else if (POS == 8)
	{
		mainMenu();
		return;
	}

	else if (POS == 9)
	{
		return;
	}

	else return;
}

void graphPtr(void) {
	system("mode con: cols=106 lines=30");
	system("title �˰��� - �׷���");


	printf("");
	puts("������������������������������������������������������");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	puts("��                                                                                                      ��");
	printf("������������������������������������������������������");
	gotoxy(30, 5); printf("�� DFS");
	gotoxy(65, 5); printf("�� BFS");
	gotoxy(30, 8); printf("�� ���� �˰���");
	gotoxy(65, 8); printf("�� ũ�罺Į �˰���");
	gotoxy(30, 11); printf("�� ���� ����");
	gotoxy(65, 11); printf("�� �ڷΰ���");
	gotoxy(30, 14); printf("�� �����ϱ�");

	gotoxy(44, 24); printf("�޴� �̵� : <- / ->");
	gotoxy(44, 26); printf("�޴� ���� : Enter");

	return;
}

void graphMenu(void) {
	int POS = 0;
	CursorView(0);
	system("COLOR 0F");
	graphPtr();

	SetColor(3);
	gotoxy(30, 5); printf("�� DFS");
	SetColor(15);
	gotoxy(65, 5); printf("�� BFS");
	gotoxy(30, 8); printf("�� ���� �˰���");
	gotoxy(65, 8); printf("�� ũ�罺Į �˰���");
	gotoxy(30, 11); printf("�� ���� ����");
	gotoxy(65, 11); printf("�� �ڷΰ���");
	gotoxy(30, 14); printf("�� �����ϱ�");

	while (1) {
		int key = KeyControl();
		if (key == LEFT)
			if (POS == 0) POS = 6;
			else POS -= 1;
		else if (key == RIGHT)
			if (POS == 6) POS = 0;
			else POS += 1;
		else if (key == ENTER)
			break;

		switch (POS) {
		case 0:
			SetColor(3);
			gotoxy(30, 5); printf("�� DFS");
			SetColor(15);
			gotoxy(65, 5); printf("�� BFS");
			gotoxy(30, 8); printf("�� ���� �˰���");
			gotoxy(65, 8); printf("�� ũ�罺Į �˰���");
			gotoxy(30, 11); printf("�� ���� ����");
			gotoxy(65, 11); printf("�� �ڷΰ���");
			gotoxy(30, 14); printf("�� �����ϱ�");
			break;
		case 1:
			gotoxy(30, 5); printf("�� DFS");
			SetColor(3);
			gotoxy(65, 5); printf("�� BFS");
			SetColor(15);
			gotoxy(30, 8); printf("�� ���� �˰���");
			gotoxy(65, 8); printf("�� ũ�罺Į �˰���");
			gotoxy(30, 11); printf("�� ���� ����");
			gotoxy(65, 11); printf("�� �ڷΰ���");
			gotoxy(30, 14); printf("�� �����ϱ�");
			break;
		case 2:
			gotoxy(30, 5); printf("�� DFS");
			gotoxy(65, 5); printf("�� BFS");
			SetColor(3);
			gotoxy(30, 8); printf("�� ���� �˰���");
			SetColor(15);
			gotoxy(65, 8); printf("�� ũ�罺Į �˰���");
			gotoxy(30, 11); printf("�� ���� ����");
			gotoxy(65, 11); printf("�� �ڷΰ���");
			gotoxy(30, 14); printf("�� �����ϱ�");
			break;
		case 3:
			gotoxy(30, 5); printf("�� DFS");
			gotoxy(65, 5); printf("�� BFS");
			gotoxy(30, 8); printf("�� ���� �˰���");
			SetColor(3);
			gotoxy(65, 8); printf("�� ũ�罺Į �˰���");
			SetColor(15);
			gotoxy(30, 11); printf("�� ���� ����");
			gotoxy(65, 11); printf("�� �ڷΰ���");
			gotoxy(30, 14); printf("�� �����ϱ�");
			break;
		case 4:
			gotoxy(30, 5); printf("�� DFS");
			gotoxy(65, 5); printf("�� BFS");
			gotoxy(30, 8); printf("�� ���� �˰���");
			gotoxy(65, 8); printf("�� ũ�罺Į �˰���");
			SetColor(3);
			gotoxy(30, 11); printf("�� ���� ����");
			SetColor(15);
			gotoxy(65, 11); printf("�� �ڷΰ���");
			gotoxy(30, 14); printf("�� �����ϱ�");
			break;
		case 5:
			gotoxy(30, 5); printf("�� DFS");
			gotoxy(65, 5); printf("�� BFS");
			gotoxy(30, 8); printf("�� ���� �˰���");
			gotoxy(65, 8); printf("�� ũ�罺Į �˰���");
			gotoxy(30, 11); printf("�� ���� ����");
			SetColor(3);
			gotoxy(65, 11); printf("�� �ڷΰ���");
			SetColor(15);
			gotoxy(30, 14); printf("�� �����ϱ�");
			break;
		case 6:
			gotoxy(30, 5); printf("�� DFS");
			gotoxy(65, 5); printf("�� BFS");
			gotoxy(30, 8); printf("�� ���� �˰���");
			gotoxy(65, 8); printf("�� ũ�罺Į �˰���");
			gotoxy(30, 11); printf("�� ���� ����");
			gotoxy(65, 11); printf("�� �ڷΰ���");
			SetColor(3);
			gotoxy(30, 14); printf("�� �����ϱ�");
			SetColor(15);
			break;
		default: break;
		}
		Sleep(200);
	}
	cls;

	system("mode con: cols=106 lines=30");

	if (POS == 0) {
		printDFS();

		gotoxy(44, 24); printf("�ڷΰ��� : BackSpace");
		gotoxy(44, 26); printf("�����ϱ� : ESC");

		while (1) {
			if (KeyControl() == BACK) {
				cls;
				graphMenu();
				return;
			}
			else if (KeyControl() == ESC)
			{
				return;
			}
			else {
				continue;
			}
		}
	}

	else if (POS == 1)
	{
		printBFS();

		gotoxy(44, 24); printf("�ڷΰ��� : BackSpace");
		gotoxy(44, 26); printf("�����ϱ� : ESC");

		while (1) {
			if (KeyControl() == BACK) {
				cls;
				graphMenu();
				return;
			}
			else if (KeyControl() == ESC)
			{
				return;
			}
			else {
				continue;
			}
		}
	}

	else if (POS == 2)
	{
		//�׷��� �Լ� ��?

		gotoxy(44, 24); printf("�ڷΰ��� : BackSpace");
		gotoxy(44, 26); printf("�����ϱ� : ESC");

		while (1) {
			if (KeyControl() == BACK) {
				cls;
				graphMenu();
				return;
			}
			else if (KeyControl() == ESC)
			{
				return;
			}
			else {
				continue;
			}
		}
	}

	else if (POS == 3)
	{
		//�׷��� �Լ� ��?

		gotoxy(44, 24); printf("�ڷΰ��� : BackSpace");
		gotoxy(44, 26); printf("�����ϱ� : ESC");

		while (1) {
			if (KeyControl() == BACK) {
				cls;
				graphMenu();
				return;
			}
			else if (KeyControl() == ESC)
			{
				return;
			}
			else {
				continue;
			}
		}
	}

	else if (POS == 4)
	{
		//�׷��� �Լ� ��?

		gotoxy(44, 24); printf("�ڷΰ��� : BackSpace");
		gotoxy(44, 26); printf("�����ϱ� : ESC");

		while (1) {
			if (KeyControl() == BACK) {
				cls;
				graphMenu();
				return;
			}
			else if (KeyControl() == ESC)
			{
				return;
			}
			else {
				continue;
			}
		}
	}


	else if (POS == 5)
	{
		mainMenu();
		return;
	}

	else if (POS == 6)
	{
		return;
	}

	else return;
}