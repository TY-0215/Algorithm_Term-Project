#pragma once
#include "PrintArray.h"
#include "main.h"
#include "LinkedQueue.h"
#define RADIX 10
#define DIGIT 4


void RadixSort(int* arr, int size) {
	int i, bucket, d, factor = 1;
	int count_radix = 1;

	LQueueType* Q[RADIX];
	for (bucket = 0; bucket < RADIX; bucket++) Q[bucket] = createLinkedQueue();

	for (d = 0; d < DIGIT; d++)
	{
		for (i = 0; i < size; i++)
		{
			enLQueue(Q[(arr[i] / factor) % RADIX], arr[i]);
		}

		for (bucket = 0, i = 0; bucket < RADIX; bucket++)
		{
			while (!isLQEmpty(Q[bucket]))
			{
				arr[i++] = deLQueue(Q[bucket]);
			}
		}

		printf("%d회차 정렬 : ", count_radix++);
		for (i = 0; i < size; i++)
		{
			printf("%3d ", arr[i]);
		}
		printf("\n\n");
		factor = factor * RADIX;
	}
}