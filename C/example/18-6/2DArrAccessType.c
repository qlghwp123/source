#include <stdio.h>

int main(void)
{
    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    //2���� �迭������ arr[i] �� *(arr+i)�� �������� �����ش�.
    printf("a[0]= %p\n", a[0]);
    printf("*(a+0) : %p\n", *(a + 0));

    printf("a[1] : %p\n", a[1]);
    printf("*(a+1) : %p\n", *(a + 1));

    printf("a[2] : %p\n", a[2]);
    printf("*(a+2) : %p\n", *(a + 2));

    //a[i][j]�� ���� ǥ�� ����� 3���� �ִٴ� ���� �����ش�.
    printf("%d, %d \n", a[2][1], (*(a + 2))[1]);
    printf("%d, %d \n", a[2][1], *(a[2] + 1));
    printf("%d, %d \n", a[2][1], *(*(a + 2) + 1));

    return 0;
}