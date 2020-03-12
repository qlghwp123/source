//하나의 정수를 입력 받아서, 그 수의 제곱의 결과를 출력하는 프로그램을 작성해보자.
//예를 들어서 5가 입력되면 25가 출력되어야 한다.
#include <stdio.h>

int main(void)
{
    int squre_root, square;

    printf("정수를 입력하세요: ");
    scanf("%d", &squre_root);

    square=squre_root*squre_root;

    printf("제곱 : %d\n", square);

    return 0;

}
