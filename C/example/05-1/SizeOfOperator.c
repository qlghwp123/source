/*
자료형의 관한 예제로써 ANsI의 자료형 규정을 약하게 해놨기에
컴파일러마다 약간씩 자료형의 sizeof 값이 다르다.
그리고 sizeof는 연산자다.
*/

#include <stdio.h>

int main(void)
{
    char ch = 9;
    int inum=1024;
    double dnum=3.141592;

    printf("변수 ch의 크기 : %d\n", sizeof(ch));
    printf("변수 inum의 크기 : %d\n", sizeof(inum));
    printf("변수 dnum의 크기 : %d\n\n", sizeof(dnum));

    printf("char의 크기 : %d\n", sizeof(char));
    printf("short의 크기 : %d\n", sizeof(short));
    printf("long의 크기 : %d\n", sizeof(long));
    printf("int의 크기 : %d\n", sizeof(int));
    printf("long long의 크기 : %d\n", sizeof(long long));
    printf("float의 크기 : %d\n", sizeof(float));
    printf("double의 크기 : %d\n", sizeof(double));

    return 0;
}