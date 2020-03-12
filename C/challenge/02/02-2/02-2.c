//프로그램 사용자로부터 10진수 형태로 정수를 하나 입력 받은 다음,
//이를 2진수로 변환해서 출력하는 프로그램을 작성해 보자.
//10진수 정수 입력 : 12
//1100
#include <stdio.h>

void binomial(int *num)
{
    int temp;
    int i;
    int count = 0;
    int arr[20] = {0};

    temp = *num;

    while (temp != 0)
    {
        if (temp % 2 == 1)
            arr[count] = 1;
        temp /= 2;
        count++;
    }
    for (i = count; i > 0; i--)
        printf("%d", arr[i - 1]);
}

int main(void)
{
    int num;

    printf("10진수 정수 입력 : ");
    scanf("%d", &num);

    binomial(&num);

    return 0;
}