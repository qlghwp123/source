//달팽이 배열을 만들어서 이를 출력하는 프로그램을 작성하고자 한다.
//여기서 말하는 달팽이 배열은 다음과 같다.
//그림 생략
//위 그림에서는 4 X 4 의 달팽이 배열과 5 X 5의 달팽이 배열을 보여주고 있다.
//이 내용을 참조하여 프로그램 사용자로부터 하나의 숫자 n을 입력 받아서 n x n 길이에
//해당하는 달팽이 배열을 출력해주는 프로그램을 작성해 보자.
#include <stdio.h>

void DoSnail(int (*arr)[100], int len, int input)
{
    int i, j = 0, k = 0;
    int val = 1;

    for (i = 0; i < input / 2; i++)
    {
        j = i;                          //시작점 배치
        for (k = i; k < input - i; k++) //오른쪽
            arr[j][k] = val++;

        k--;

        for (j += 1; j < input - i; j++) //아래쪽
            arr[j][k] = val++;

        j--;

        for (k -= 1; k >= i; k--) //왼쪽
            arr[j][k] = val++;

        k++;

        for (j -= 1; j > i; j--) //위쪽
            arr[j][k] = val++;

        if (input % 2 == 1) //만약 홀수 일경우 중앙에 그냥 박아버리기
            arr[j + 1][k + 1] = val;
    }
}

int main(void)
{
    int input;
    int arr[100][100] = {0};
    int i, j;

    printf("숫자를 입력하시오 : ");
    scanf("%d", &input);

    DoSnail(arr, 100, input);

    for (i = 0; i < input; i++)
    {
        for (j = 0; j < input; j++)
            if (arr[i][j] != 0)
                printf("%5d", arr[i][j]);
            else
                printf("%5s", " ");
        printf("\n");
    }

    return 0;
}