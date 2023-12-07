#pragma once
#include "PrintArray.h"
#include "main.h"

void InsertSort() {
	printf("삽입 정렬 알고리즘 시뮬레이션\n\n");


	//배열 크기 및 원소 입력
	
	printf("배열의 크기를 입력하세요(자연수) : ");

	int n = 0;
	scanf_s("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));

	printf("배열의 원소를 입력하세요(띄어쓰기로 구분) : ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", arr + i);
	}



	//현재 배열 출력
	printf("\n\n현재 배열 : [ ");
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
		printf("%d회차 정렬 : ", i);
		
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
