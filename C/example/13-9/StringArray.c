/*
큰따옴표로 묶여진 문자열은 자동으로 메모리에 할당되고 그 주소값을 반환함을 보여준다.
따라서 strArr의 각 요소는 각 문자열의 시작 주소이다.
*/
#include <stdio.h>

int main(void)
{
    char *strArr[3] = {"Simple", "String", "Array"};

    printf("%s\n", strArr[0]);
    printf("%s\n", strArr[1]);
    printf("%s\n", strArr[2]);

    return 0;
}