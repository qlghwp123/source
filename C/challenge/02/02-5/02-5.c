//배열에 저장되어 있는 요소들을 내림차순으로 정렬하는 함수를 정의하자.
//(함수 이름은 DeaSort로 정의하자.)그리고 이 함수를 호출하는 예제를 작성해보자.
//프로그램의 흐름은 다음과 같이 구성을 하자. 일단 길이가 7인 int형 배열을 선언해서 프로그램
//사용자로부터 7개의 정수를 입력 받도록 하자. 그리고 입력 받은 정수를 내림차순으로 정렬하기 위해서,
//배열을 인자로 전달하면서 DeaSort 함수를 호출하자. 그리고 마지막으로 제대로 정렬이 되었는지 확인하기
//위해서 배열의 요소들을 순서대로 출력해보자.
//입력 : 1
//입력 : 2
//입력 : 3
//입력 : 4
//입력 : 5
//입력 : 6
//입력 : 7
//7 6 5 4 3 2 1
#include <stdio.h>

void DeaSort(int arr[], int len)
{
    int i, j, temp;

    for (i = 0; i < len - 1; i++) //2개씩 바꾸기에 len-1 인가?
    {
        for (j = 0; j < len - 1 - i; j++) //바꿀 때마다 대상이 1개씩 줄어드므로 -i
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int arr[7];
    int i;
    int len = sizeof(arr) / sizeof(int);

    for (i = 0; i < len; i++)
    {
        printf("입력 : ");
        scanf("%d", &arr[i]);
    }

    DeaSort(arr, len);

    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}