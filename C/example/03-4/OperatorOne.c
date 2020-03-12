/*
printf 부분을 보고 함수 호출문 인자전달 위치에 연산식이 올 수 있음을 알 수 있다.
이러면 함수 호출 이전에 연산식이 먼저 진행되며 그 연산의 결과가 인자가 된다.
예)printf("머시기 %d", 계산식)
*/
#include <stdio.h>

int main(void)
{
	int num1=9, num2=2;
																//num = 20; 우측 피연산자 값을 변수에 저장한다.								결합방향 : ←
	printf("%d+%d=%d\n", num1, num2, num1+num2);				//두 피연산자의 값을 더한다.												결합방향 : →
	printf("%d-%d=%d\n", num1, num2, num1-num2);				//왼쪽 피연산자 값에서 오른쪽의 피연산자 값을 뺀다.							결합방향 : →
	printf("%d×%d=%d\n", num1, num2, num1*num2);				//두 피연산자의 값을 곱한다.												결합방향 : →
	printf("%d÷%d의 몫 : %d\n", num1, num2, num1/num2);		//왼쪽 피연산자 값을 오른쪽 피연산자 값으로 나눈다.							결합방향 : →
	printf("%d÷%d의 나머지 : %d\n", num1, num2, num1%num2);	//왼쪽의 피연산자 값을 오른쪽 피연산자 값으로 나눴을 때 나머지를 반환한다.	결합방향 : →

	return 0;
}