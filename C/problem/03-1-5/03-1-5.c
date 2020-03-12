//입력 받은 세 개의 정수 num1, num2, num3를 대상으로 
//다음 연산의 결과를 출력하는 프로그램을 작성해보자
//(num1-num2)*(num2+num3)*(num3%num1)
#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    int subtraction, addtion, rest;
    int result;

    printf("세 개의 정수를 입력하세요. : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    subtraction=num1-num2;
    addtion=num2+num3;
    rest=num3%num1;
    
    result=subtraction*addtion*rest;
    //(num1-num2)*(num2+num3)*(num3%num1) 에서
    //                             ↑이 부분 때문에 컴파일이 안된다 ㅋㅋㅋㅋ
    //printf("(num1-num2)*(num2+num3)*(num3%num1)=%d\n", result); 가 안됨.
    printf("연산결과 :  %d\n", result);

    return 0;
}