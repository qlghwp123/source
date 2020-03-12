//다음과 같이 두 개의 int형 포인터 변수와 길이가 5인 int형 배열을 선언한다.
//int *maxPtr;
//int *minPtr;
//int arr[5];
//그리고 MaxAndMin이란 이름의 함수를 정의하고 이를 호출하면서 위의 배열과 두 포인터 변수에 대한 정보를 전달하자.
//어떠한 정보를 어떻게 전달할지는 여러분이 결정할 몫이다. 그리고 함수 호출이 완료되면, 포인터 변수 maxPtr에는
//가장 큰 값이 저장된 배열요소의 주소 값이, minPtr에는 가장 작은 값이 저장된 배열요소의 주소 값이 저장되어야 한다.
#include <stdio.h>

void MaxAndMin(int **pMax, int **pMin, int *arr, int len)
{
    int i;
    int *max, *min; //포인터 변수가 아닌 그냥 int형 변수를 써서 틀렸었다.

    max = min = &arr[0];

    for (i = 1; i < len; i++)
    {
        if (*max < arr[i])
            max = &arr[i];
        if (*min > arr[i])
            min = &arr[i];
    }

    *pMax = max;
    *pMin = min;
}

int main(void)
{
    int *maxPtr;
    int *minPtr;
    int arr[5];
    int len = sizeof(arr) / sizeof(int);
    int i;

    for (i = 0; i < len; i++)
    {
        printf("값을 입력하세요 : ");
        scanf("%d", &arr[i]);
    }

    MaxAndMin(&maxPtr, &minPtr, arr, len);

    printf("%d %d \n", &arr[0], &arr[4]); //테스트용
    printf("%d %d \n", maxPtr, minPtr);

    return 0;
}