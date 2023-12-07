#pragma once
#include "PrintArray.h"
#include "main.h"

void SelectionSort() {
	printf("���� ���� �˰��� �ùķ��̼�\n\n");


	//�迭 ũ�� �� ���� �Է�
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




	for (int i = 0; i < n - 1; i++)
	{
		int loc = n - 1;
		for (int j = i; j < n - 1; j++)
		{
			if (arr[loc] > arr[j]) {
				loc = j;
			}
		}

		int tmp = arr[loc];
		arr[loc] = arr[i];
		arr[i] = tmp;

		printf("%dȸ�� ���� : ", i + 1);

		for (int k = 0; k < n; k++)
		{
			if (k == loc || k == i)
			{
				SetColor(3);
				printf("%2d ", arr[k]);
				SetColor(15);
			}
			else
			{
				printf("%2d ", arr[k]);
			}
		}
		printf("\n\n");
	}
	free(arr);
}