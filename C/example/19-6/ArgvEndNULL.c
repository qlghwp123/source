/*
main의 인자가 어떻게 형성되는지를 알려주는 예제이다.
공백을 기준으로 문자열을 나누고 argv의 마지막에 널 문자가 들어간다.
그리고 main(개수, 포인터배열 변수) 가 실행된다.

*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    printf("전달된 문자열의 수 : %d\n", argc);

    while (argv[i] != NULL)
    {
        printf("%d번째 문자열 : %s\n", i + 1, argv[i]);
        i++;
    }

    return 0;
}