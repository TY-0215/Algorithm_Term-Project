#pragma once
#include "PrintArray.h"
#include "main.h"
int tmp[100] = { 0, };
int merge_size;
int merge_num = 1;

void Merge(int* arr, int left, int mid, int right) {
	int i = left;
	int j = mid + 1;
	int k = left;

	while (i <= mid && j <= right)
	{
		if (arr[i] <= arr[j]) tmp[k++] = arr[i++];
		else tmp[k++] = arr[j++];
	}

	while (i <= mid)
	{
		tmp[k++] = arr[i++];
	}
	while (j <= right)
	{
		tmp[k++] = arr[j++];
	}

	i = left; k = left;
	while (i <= right)
	{
		arr[i++] = tmp[k++];
	}
	
	printf("%d회차 정렬 : ",merge_num++);
	for (int i = 0; i < merge_size; i++) {
		if (i==left)
		{
			SetColor(3);
			printf("%2d ", arr[i]);
		}
		else if (i==right)
		{
			printf("%2d ", arr[i]);
			SetColor(15);
		}
		else
		{
			printf("%2d ", arr[i]);
		}
	}
	printf("\n\n");
}

void MergeSort(int* arr, int start, int end) {
	if (start < end)
	{
		int mid = (start + end) / 2;
		MergeSort(arr, start, mid);
		MergeSort(arr, mid + 1, end);

		Merge(arr, start, mid, end);
	}
}