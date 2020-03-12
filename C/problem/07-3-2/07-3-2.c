//0이상 100이하의 정수 중에서 짝수의 합을 출력하는 프로그램을 구현하되, 
//do~while문 기반으로 구현해보자. 참고로 덧셈의 결과는 2550이 되어야한다.
#include <stdio.h>

int main(void)
{
    int even=2, num=1, result=0;

    do
    {
        result += even*num;
        num++;
    } while (num<51);
    
    printf("짝수의 합 : %d\n", result);

    return 0;

}