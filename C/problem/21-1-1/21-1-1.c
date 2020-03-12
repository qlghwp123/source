//프로그램 사용자로부터 알파벳 문자를 하나 입력 받아서, 입력 받은 문자가 대문자면 이를 소문자로 변환해서 출력해주고,
//입력 받은 문자가 소문자면 이를 대문자로 변환해서 출력해주는 프로그램을 작성해보자.
//단, 문자 입출력에는 getchar 함수와 putchar 함수를 사용하기로 하자.
//그리고 프로그램 사용자가 알파벳 이외의 문자를 입력하는 경우에는 그에 따른 오류 메시지를 간단히 출력하기로 하자.
#include <stdio.h>

int main(void)
{
    int input;

    input = getchar();

    if (input >= 65 && input <= 90)
    {
        input += 32;
        putchar(input);
    }
    else if (input >= 97 && input <= 122)
    {
        input -= 32;
        putchar(input);
    }
    else
    {
        putchar(78);
        putchar(111);
    }

    return 0;
}