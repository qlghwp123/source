/*
C언어에서 표현하는 모든 문자열의 끝에는 널 문자가 자동으로 삽입된다.
또한 문자열을 입력받을 때 배열의 이름에는 &연산자를 붙이면 안되는 것을 보여준다.
*/

#include <stdio.h>

int main(void)
{
    char str[50];
    int idx = 0;

    printf("문자열 입력 : ");
    scanf("%s", str);

    printf("입력 받은 문자열 : %s\n", str);

    printf("문자 단위 출력 : ");
    while (str[idx] != '\0')
    {
        printf("%c", str[idx]);
        idx++;
    }

    printf("\n");

    return 0;
}