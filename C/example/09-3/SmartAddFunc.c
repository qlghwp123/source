/*
반환값, 매개변수 유무에 따른 4가지의 경우에 해당하는 함수들을 작성해서 보여주는 예제이다.
*/

#include <stdio.h>

int Add(int num1, int num2) //반환값 O, 매개변수 O
{
    return num1 + num2;
}

void ShowAddResult(int num) //반환값 X, 매개변수 O
{
    printf("덧셈결과 출력 : %d\n", num);
}

int ReadNum(void)           //반환값 O, 매개변수 X
{
    int num;

    scanf("%d", &num);

    return num;
}

void HowToUseThisProg(void) //반환값 X, 매개변수 X
{
    printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다.\n");
    printf("자! 그럼 두 개의 정수를 입력하세요.\n");
}

int main(void)
{
    int result, num1, num2;

    HowToUseThisProg();
    num1 = ReadNum();
    num2 = ReadNum();
    result = Add(num1, num2);
    ShowAddResult(result);

    return 0;
}