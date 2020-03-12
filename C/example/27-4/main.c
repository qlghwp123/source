/*
구조체가 중복될 때, 헤더파일로 넣으면 편하다.
*/
#include <stdio.h>
#include "stdiv.h"

extern Div IntDiv(int num1, int num2);

int main(void)
{
	Div val = IntDiv(5,2);
	
	printf("몫 : %d\n", val.quotient);
	printf("나머지 : %d\n", val.remainder);

	return 0;
}