/*
사용자로부터 입력 받은 정수 값을 읽어서 if문으로 양수, 음수, 0인지 판단한다.
간단한 if문 사용 예제이다.
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("정수 입력 : ");
    scanf("%d", &num);

    if( num > 0 )
        printf("입력 값은 0보다 크다.\n");
    
    if( num < 0)
        printf("입력 값은 0보다 작다.\n");

    if( num == 0 )
        printf("입력 값은 0과 같다. \n");

    return 0;

}