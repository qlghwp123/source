/*
복합 대입 연산자의 예이다.
*/

#include <stdio.h>

int main(void)
{
	int num1= 2, num2= 4, num3= 6, num4= 8, num5 = 10;

	num1+=3;	//num1 = num1+3
	num2-=4;	//num2 = num2-4
	num3*=5;	//num3 = num3*5
	num4/=6;	//num4 = num4/6
	num5%=7;	//num5 = num5%7

	printf("Result : %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);

	return 0;
}