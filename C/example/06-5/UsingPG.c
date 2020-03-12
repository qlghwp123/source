/*
%g를 사용하는 예제이다. 값에 따라서 %f, %e를 사용한다.
*/

#include <stdio.h>

int main(void)
{

    double d1=1.23e-3;  //0.00123
    double d2=1.23e-4;  //0.000123
    double d3=1.23e-5;  //0.0000123
    double d4=1.23e-6;  //0.00000123

    printf("%g\n", d1);
    printf("%g\n", d2);
    printf("%g\n", d3);
    printf("%g\n", d4);

    return 0;

}