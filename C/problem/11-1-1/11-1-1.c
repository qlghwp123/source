//길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터 총 5개의 정수를 입력 받자! 그리고 입력이 끝나면
//다음의 내용을 출력하도록 예제를 작성해보자.
//  · 입력된 정수 중에서 최댓값
//  · 입력된 정수 중에서 최솟값
//  · 입력된 정수의 총 합
//단, 반드시 입력을 완료한 상태에서 '최댓값'과 '최솟값' 그리고 '총 합'을 계산해야 한다.
//참고로 배열을 대상으로 scanf문을 구성할 때에는 다음과 같이 해야한다.
//scanf("%d", &arr[2]);
//변수를 대상으로 & 연산자를 붙여주듯이, 배열요소 대상으로 할 때에도 & 연산자를 붙여야 한다.
#include <stdio.h>

int main(void)
{
    int arr[5], i;
    int big, small, sum = 0;

    for (i = 0; i < 5; i++)
    {
        printf("5개의 정수를 입력하세요 : ");
        scanf("%d", &arr[i]);
    }

    big = small = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (small > arr[i])
            small = arr[i];
        if (arr[i] > big)
            big = arr[i];

        sum += arr[i];
    }

    printf("최댓값 : %d, 최솟값 : %d, 총 합 : %d\n", big, small, sum);

    return 0;
}