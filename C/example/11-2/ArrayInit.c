/*
�迭 �ʱ�ȭ ��, {}�� ����ؼ� �Ϻκи� �ʱ�ȭ �� ��� �������� 0���� ä������. 
*/

#include <stdio.h>

int main(void)
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[5] = {1, 2};
    int ar1len, ar2len, ar3len, i;

    printf("�迭 arr1�� ũ�� : %d\n", sizeof(arr1));
    printf("�迭 arr2�� ũ�� : %d\n", sizeof(arr2));
    printf("�迭 arr3�� ũ�� : %d\n", sizeof(arr3));

    ar1len = sizeof(arr1) / sizeof(int);
    ar2len = sizeof(arr2) / sizeof(int);
    ar3len = sizeof(arr3) / sizeof(int);

    for (i = 0; i < ar1len; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    for (i = 0; i < ar2len; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    for (i = 0; i < ar3len; i++)
        printf("%d ", arr3[i]);
    printf("\n");

    return 0;
}