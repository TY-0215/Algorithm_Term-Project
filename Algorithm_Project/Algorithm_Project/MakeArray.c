#include "PrintArray.h"
#include "main.h"
#include <stdlib.h>


int* MakeArray() {
    int arraySize;

    // �迭�� ũ�⸦ �Է� ����
    printf("�迭�� ũ�⸦ �Է��ϼ��� (�ڿ���): ");
    scanf_s("%d", &arraySize);

    int* arr = (int*)malloc(arraySize * sizeof(int));

    printf("�迭�� ���Ҹ� �Է��ϼ��� (����� ����): ");
    for (int i = 0; i < arraySize; i++) {
        scanf_s("%d", arr + i);
    }

    return arr;
    //�ٸ� �Լ��� �� ��, �� free�� �޸� ���� ����
}