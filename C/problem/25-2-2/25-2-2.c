//프로그램 사용자로부터 정수를 입력받는다. -1이 입력될 때까지 계속해서 입력 받아서, 프로그램 종료 직전에 입력받은 정수 전부를 순서대로 출력하는 프로그램을 작성해보자.
//그런데 이 문제의 핵심은 프로그램 사용자가 몇 개의 정수를 입력할지 모른다는데 있다. 그래서 이 문제의 해결을 위해서 힙 영역을 사용하기로 하겠다.
//일단은 길이가 5인 int형 배열을 힙에 할당하자. 그리고 배열이 꽉 찰 때마다 길이를 3씩 늘리기로 하자. 이 때 앞서 소개한 realloc 함수를 이용하면 상대적으로 쉽게 배열의 길이를 늘릴 수 있다.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int input;
    int count = 0;
    int size = 5;
    int *arr = (int *)calloc(sizeof(int), size);
    int i;

    do
    {
        if (count == size)
        {
            arr = (int *)realloc(arr, sizeof(int) * (size + 3));
            size += 3;
        }

        printf("정수를 입력하세요 : ");
        scanf("%d", &arr[count]);

    } while (arr[count++] != -1);

    for (i = 0; i < count; i++)
        printf("%d\n", arr[i]);

    free(arr);

    return 0;
}