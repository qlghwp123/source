//세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해보자.
//예를 들어서 함수의 이름이 Swap3 라 하면, 다음의 형태로 호출되어야 한다.
//  Swap3(&num1, &num2, &num3);
//그리고 함수호출의 결과로 num1의 값은 num2에, num2에 저장된 값은 num3에, 그리고 num3에 저장된 값은 num1에 저장되어야 한다.

void Swap3(int *n1, int *n2, int *n3)
{
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    temp = *n1;
    *n1 = *n3;
    *n3 = temp;

    /*답지가 훨씬 간결하다.
    int temp=*ptr3;
    *ptr3=*ptr2;
    *ptr2=*ptr1;
    *ptr1=temp;
    */
}

#include <stdio.h>
int main(void)
{
    int num1 = 3;
    int num2 = 4;
    int num3 = 5;

    Swap3(&num1, &num2, &num3);

    printf("%d %d %d\n", num1, num2, num3);

    return 0;
}
