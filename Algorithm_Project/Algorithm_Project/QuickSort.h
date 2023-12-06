#pragma once
#include "PrintArray.h"
#include "main.h"
int quick_size;
int quick_num = 1;

int MakePivot(int* arr, int l, int r) {
	int p = arr[r];
	int i = l - 1;

	for (int j = l; j < r; j++)

	{
		if (arr[j] < p) {
			i++;
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	int tmp = arr[i + 1];
	arr[i + 1] = arr[r];
	arr[r] = tmp;

	printf("%d회차 정렬 (pivot = %d) : ", quick_num++, p);
	for (int k = 0; k < quick_size; k++)
	{
		if (arr[k] == p)
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

	return i + 1;
}

void QuickSort(int* arr, int l, int r) {
	if (l < r)
	{
		int pivot = MakePivot(arr, l, r);

		QuickSort(arr, l, pivot - 1);
		QuickSort(arr, pivot + 1, r);
	}
}