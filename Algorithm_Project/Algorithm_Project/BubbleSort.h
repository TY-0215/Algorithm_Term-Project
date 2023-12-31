#pragma once
#include "PrintArray.h"
#include "main.h"

void BubbleSort() {
	printf("버블 정렬 알고리즘 시뮬레이션\n\n");


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



	//정렬 시작
	for (int i = 0; i < n - 1; i++)
	{
		int loc = 0;
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				loc = j;
			}
		}

		printf("%d회차 정렬 : ", i + 1);
		for (int k = 0; k < n; k++)
		{
			if (k == loc+1)
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