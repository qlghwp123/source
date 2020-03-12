/*
변수 : 값을 저장할 수 있는 메모리 공간에 붙은 이름, 혹은 그 메모리 공간 자체를 가리키는 이름.
변수를 하나 만들면 그 변수 이름을 통해서 값을 저장과 참조가 가능하며 그 값의 변경도 가능하다.
초기화 : 변수가 선언되고 처음 값을 저장하는 것
변수를 선언만 하고 초기화하지 않으면 변수에 쓰레기값이 저장된다.
쓰레기값 : 아무런 의미가 없는 값
*/
#include <stdio.h>

int main(void)
{
	int num1, num2;			//변수 num1, num2 선언
	int num3=30, num4=40;	//변수 num3, num4의 선언과 동시에 초기화

	printf("num1 : %d, num2 : %d\n", num1, num2);
	num1 = 10;		//변수 num1 의 초기화
	num2 = 20;		//변수 num2 의 초기화

	printf("num1 : %d, num2 : %d\n", num1, num2);
	printf("num3 : %d, num4 : %d\n", num3, num4);

	return 0;

}