/*
strcmp, strncmp의 사용 방법을 보인다.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20];
    char str2[20];

    printf("문자열 입력 : ");
    scanf("%s", str1);
    printf("문자열 입력 : ");
    scanf("%s", str2);

    if (!strcmp(str1, str2))
        puts("두 문자열은 완벽히 동일합니다.\n");
    else
    {
        puts("두 문자열은 동일하지 않습니다.\n");

        if (!strncmp(str1, str2, 3))
            puts("그러나 앞 세 글자는 동일합니다.\n");
    }

    return 0;
}