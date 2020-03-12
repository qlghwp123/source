/*
문자열을 복사하는 함수인 strcpy, strncpy를 사용하는 예제이다.
주의사항으로 strncpy는 딱 정해진 값만 복사하기에 널 문자를 신경 쓰지 않는다.
따라서 case 3 처럼 크기-1 까지만 복사하고 마지막에는 널문자를 넣어줘야한다.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20] = "1234567890";
    char str2[20];
    char str3[5];

    //case 1
    strcpy(str2, str1);
    puts(str2);

    //case 2
    strncpy(str3, str1, sizeof(str3));
    puts(str3);

    //case 3
    strncpy(str3, str1, sizeof(str3) - 1);
    str3[sizeof(str3) - 1] = 0;
    puts(str3);

    return 0;
}