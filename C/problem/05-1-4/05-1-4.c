//프로그램 사용자로부터 아스키 코드 값을 정수의 형태로 입력 받은 후에 해당 정수의 아스키 코드 문자를
//출력하는 프로그램을 작성해보자. 예를 들어서 프로그램 사용자가 정수 65를 입력하면 문자 A를 출력해야한다.

#include <stdio.h>

int main(void)
{
    char input_to_character;

    printf("정수를 입력하세요. : ");
    scanf("%d", &input_to_character);

    printf("입력한 정수의 문자는 '%c' 입니다.", input_to_character);

    return 0;
}