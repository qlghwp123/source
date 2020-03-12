/*
3차원 배열의 초기화 방법과 3차원 배열은 2차원 배열 여러 개를 합쳐놓은 것이라는 것을 일깨워준다.
*/
#include <stdio.h>

int main(void)
{
    int mean = 0, i, j;
    int record[3][3][2] = {
        {{70, 80},
         {94, 90},
         {70, 85}},
        {{83, 90},
         {95, 60},
         {90, 82}},
        {{98, 89},
         {99, 94},
         {91, 87}}};

    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            mean += record[0][i][j];

    printf("A 학급 전체 평균 : %g\n", (double)mean / 6);

    mean = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            mean += record[1][i][j];

    printf("B 학급 전체 평균 : %g\n", (double)mean / 6);

    mean = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            mean += record[2][i][j];

    printf("C 학급 전체 평균 : %g\n", (double)mean / 6);

    return 0;
}