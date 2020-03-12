/*
매개변수와 반환값이 있는 함수의 경우를 보는 예제이다.
여기서 알 수 있는 사실은 값이 반환된다는 것은 함수의 호출문이 값으로 대체된다는 것으로 이해할 수 있다.
*/

#include <stdio.h>

int Add(int num1, int num2)
{
    return num1 + num2;
}

int main(void)
{
    int result;

    result = Add(3,4);

    printf("덧셈결과1 : %d\n", result);
    result = Add(5,8);
    printf("덧셈결과2 : %d\n", result);

    return 0;
}