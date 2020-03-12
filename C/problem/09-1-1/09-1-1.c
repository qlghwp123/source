//세 개의 정수를 인자로 전달받아서 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환하는 함수를
//정의해보자. 그리고 이 함수들을 호출하는 적절한 main 함수도 작성해보자.
#include <stdio.h>

int MostBigNumber(int num1, int num2, int num3)
{
    if(num1>num2)
    {
        if(num1>num3)
            return num1;
        else
            return num3;
        
    }
    else
    {
        if(num2>num3)
            return num2;
        else
            return num3;
    }
    
}

/*
//답지, 답지가 더 간결하고 좋다.
int MostBigNumber(int n1, int n2, int n3)
{
    if(n1>n2)
        return (n1 > n3) ? n1 : n3;
   else
        return (n2 > n3) ? n2 : n3;
}   
*/

int MostSmallNumber(int num1, int num2, int num3)
{
    if(num1>num2)
    {
        if(num2>num3)
            return num3;
        else
            return num2;
        
    }
    else
    {
        if(num1>num3)
            return num3;
        else
            return num1;
    }
    
}

/*
//답지, 답지가 더 간결하고 좋다.
int MostSmallNumber(int n1, int n2, int n3)
{
    if(n1>n2)
        return (n2 > n3) ? n3 : n2;
   else
        return (n1 > n3) ? n3 : n1;
}   
*/

int main(void)
{
    int num1, num2, num3;
    int big, small;

    printf("세 개의 정수를 입력하세요 : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    big = MostBigNumber(num1, num2, num3);
    small = MostSmallNumber(num1, num2, num3);

    printf("가장 큰 수는 %d, 가장 작은 수는 %d이다.\n", big, small);

    return 0;
}