#include <stdio.h>
#include "PrintArray.h"

void Print_Array(int* arr, int n) {

	for (int k = 0; k < n; k++)
	{
		printf("%d ", arr[k]);
	}
	printf("\n\n");
}