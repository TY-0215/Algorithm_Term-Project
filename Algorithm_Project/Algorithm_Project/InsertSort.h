#pragma once
#include "PrintArray.h"
#include "main.h"

void InsertSort() {
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



	for (int i = 1; i < n; i++)
	{
		int loc = i-1;
		int tmp = arr[i];

		while (loc >= 0 && tmp < arr[loc])
		{
			arr[loc + 1] = arr[loc];
			loc--;
		}

		arr[loc + 1] = tmp;
		printf("%dȸ�� ���� : ", i);
		
		for (int k = 0; k < n; k++)
		{
			if (k == 0)
			{
				SetColor(3);
				printf("%2d ", arr[k]);
			}
			else if (k == i)
			{
				SetColor(15);
				printf("%2d ", arr[k]);
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
