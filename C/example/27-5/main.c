/*
헤더 파일이 중복삽입 자체는 문제가 되지 않는다. 그러나 구조체를 중복 정의하는 것은 문제가 된다.
#ifndef~#endif를 사용하여 중복 삽입을 미연에 방지한다.
*/
#include <stdio.h>
#include "stdiv2.h"
#include "intdiv4.h"

int main(void)
{
	Div val = IntDiv(5, 2);

	printf("몫 : %d\n", val.quotient);
	printf("나머지 : %d\n", val.remainder);

	return 0;
}