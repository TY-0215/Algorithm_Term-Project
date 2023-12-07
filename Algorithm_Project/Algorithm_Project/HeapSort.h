#pragma once
#include "PrintArray.h"
#include "main.h"



void Heapify(int* arr, int root, int n) {
	int left = 2 * root;
	int right = 2 * root + 1;
	int bigger;

	if (right <= n)
	{
		if (arr[left] > arr[right]) bigger = left;
		else bigger = right;
	}

	else if (left <= n)
	{
		bigger = left;
	}

	else
	{
		return;
	}


	if (arr[bigger] > arr[root])
	{
		int tmp = arr[bigger];
		arr[bigger] = arr[root];
		arr[root] = tmp;

		Heapify(arr, bigger, n);
	}
}

void BuildHeap(int* arr, int n) {
	for (int i = n/2; i >= 0; i--)
	{
		Heapify(arr, i, n);
	}
}

void HeapSort(int* arr, int n) {
	BuildHeap(arr, n);
	int num3 = 1;

	for (int i = n; i > 0; i--)
	{
		int tmp = arr[0];
		arr[0] = arr[i];
		arr[i] = tmp;

		printf("%d회차 정렬 : ", num3++);
		for (int k = 0; k <= n; k++)
		{
			if (k == i && k == n)
			{
				SetColor(3);
				printf("%2d ", arr[k]);
				SetColor(15);
			}
			else if (k == i)
			{
				SetColor(3);
				printf("%2d ", arr[k]);
			}
			else if (k == n)
			{
				printf("%2d ", arr[k]);
				SetColor(15);
			}
			else
			{
				printf("%2d ", arr[k]);
			}
			
		}
		printf("\n\n");
		Heapify(arr, 0, i - 1);
	}
}