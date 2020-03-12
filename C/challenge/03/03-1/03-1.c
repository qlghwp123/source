//길이가 4X4 int 형 2차원 배열을 선언하고, 모든 요소를 아래 그림의 왼쪽에 있는 형태와 동일하게 초기화하자.
//그리고 배열의 요소들을 오른쪽 방향으로 90도씩 이동시켜서 그 결과를 출력하는 프로그램을 작성해보자.
//참고로 배열이 변경되는 형태는 다음과 같다.
//그림 생략
#include <stdio.h>

void PrintSqure(int (*squarePtr)[4], int len)
{
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%5d", squarePtr[i][j]);
        printf("\n");
    }

    printf("\n");
}

void RotateSquare(int (*squarPtr)[4], int len)
{
    int temp[4][4] = {0};
    int i, j;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            temp[j][3 - i] = squarPtr[i][j];

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            squarPtr[i][j] = temp[i][j];
}

int main(void)
{
    int square[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    PrintSqure(square, 4);

    //이부분을 반복문으로 돌렸으면 더 좋았을 것이다.
    RotateSquare(square, 4);
    PrintSqure(square, 4);

    RotateSquare(square, 4);
    PrintSqure(square, 4);

    RotateSquare(square, 4);
    PrintSqure(square, 4);

    return 0;
}