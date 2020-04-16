#include <stdio.h>

/*
답지에서는 첫 번째 if문을 만족하지 않는다면
다음 else if에서 똑같은 판단을 하기 때문에 효율적이지 않다고 한다.
ex)
    b >= a >= c, c >= a >= b  가 아닌 경우이다.
    근데
    3 2 1
    를 보면 두 번째 else if 조건을 만족한다.
    아마도 
    3 2 2
    같은 값 때문에 그러는 듯한데
    3 2 1 같은 첫 번째 if문을 만족하지 않는다면 ~ 이런 설명이 잘못된듯하다.
    해설을 작성한 사람의 의도가 무엇이였을까?
    정확한 의미를 잘 모르겠다. 
*/
int med3(int a, int b, int c)
{
    if( (b >= a && c <= a) || (b <= a && c >= a) )
        return a;
    else if( (a>b && c<b) || (a<b && c>b) )
        return b;
    return c;
}

int main(void)
{
    printf("med3(%d, %d, %d) = %d\n", 5, 2, 3, med3(5, 2, 3));
    printf("med3(%d, %d, %d) = %d\n", 5, 5, 3, med3(5, 5, 3));
    printf("med3(%d, %d, %d) = %d\n", 5, 2, 2, med3(5, 2, 2));
    printf("med3(%d, %d, %d) = %d\n", 2, 2, 3, med3(2, 2, 3));
    printf("med3(%d, %d, %d) = %d\n", 1, 2, 2, med3(1, 2, 2));
    printf("med3(%d, %d, %d) = %d\n", 1, 1, 1, med3(1, 1, 1));

    return 0;
}