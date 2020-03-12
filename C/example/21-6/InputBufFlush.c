/*
입력 버퍼에 개행을 지우기 위한 함수를 추가하였다.
그로 인하여 이전의 문제가 해결되었는지 살펴본다.
*/
#include <stdio.h>

void ClearLineFromReadBuffer(void)
{
    while (getchar() != '\n')
        ;
}

int main(void)
{
    char perID[7];
    char name[10];

    fputs("주민번호 앞 6자리 입력 : ", stdout);
    fgets(perID, sizeof(perID), stdin);
    ClearLineFromReadBuffer();

    fputs("이름 입력 : ", stdout);
    fgets(name, sizeof(name), stdin);

    printf("주민번호 : %s\n", perID);
    printf("이름 : %s\n", name);

    return 0;
}