/*
컴파일은 되지만 실행은 안된다. 16행이 문제가 되기 때문이다. 상수 형태의 문자열은 바꿀 수 없다.
컴파일러마다 이 부분은 컴파일 에러 or 컴파일은 되나 실행에서 문제 발생 or 그냥 문자열 안바꾸는 것으로 처리 등등
처리 방식이 다르기 때문에 범용적으로 안바꾸는 것을 원칙으로 하는 것이 맞다.
*/
#include <stdio.h>

int main(void)
{
    char str1[] = "My String";
    char *str2 = "Your String";

    printf("%s %s\n", str1, str2);

    str2 = "Our String";
    printf("%s %s\n", str1, str2);

    str1[0] = 'X';
    str2[0] = 'X';

    printf("%s %s\n", str1, str2);

    return 0;
}