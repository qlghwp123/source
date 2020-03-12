/*
문자형 상수 역시 컴파일러가 읽을 때는 아스키 코드 값을 참조해서 65로 바뀌기에 int 형임을 알 수 있다.
*/

#include <stdio.h>

int main(void)
{

    printf("literal int size : %d\n", sizeof(7));
    printf("literal double size : %d\n", sizeof(3.141592));
    printf("literal char size : %d\n", sizeof('A'));

    return 0;
}