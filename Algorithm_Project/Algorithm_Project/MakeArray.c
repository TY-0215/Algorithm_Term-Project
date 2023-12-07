#include "PrintArray.h"
#include "main.h"
#include <stdlib.h>


int* MakeArray() {
    int arraySize;

    // 배열의 크기를 입력 받음
    printf("배열의 크기를 입력하세요 (자연수): ");
    scanf_s("%d", &arraySize);

    int* arr = (int*)malloc(arraySize * sizeof(int));

    printf("배열의 원소를 입력하세요 (띄어쓰기로 구분): ");
    for (int i = 0; i < arraySize; i++) {
        scanf_s("%d", arr + i);
    }

    return arr;
    //다른 함수에 쓸 때, 꼭 free로 메모리 해제 ㄱㄱ
}