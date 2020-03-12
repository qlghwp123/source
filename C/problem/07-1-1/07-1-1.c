//프로그램 사용자로부터 양의 정수를 하나 입력
//받아서, 그 수만큼 "Hello World"를 출력하는
//프로그램을 작성해보자.

#include <stdio.h>

int main(void)
{
    int input, num=0;

    printf("양수를 입력하세요: ");
    scanf("%d", &input);

    while(num<input)
    {
        printf("Hello World! %d\n", num);
        num++;
    }

    return 0;

}