//10개의 소수(Prime Number)를 출력하는 프로그램을 작성해 보자. 참고로 정수 num이 1과 num으로 밖에 나눠지지 않는다면 이는 소수에 해당한다.
//따라서 3은 소수이다. 그러나 4는 소수가 아니다. 1, 2, 4로 나눠지기 때문이다.
//2 3 5 7 11 13 17 19 23 29
#include <stdio.h>

int main(void)
{
    int i, j, k;
    int count=0;

    i=0;
    j=2;

    while(i<10)
    {
        while(1)
        {
            count = 0;
            
            for(k=1;k<=j;k++)
                if(j%k == 0)
                    count++;


            if(count == 2)
            {
                printf("%d ", j++);
                break;
            }
            else
            {
                j++;
                continue;
            }

        }
        i++;
    }

    return 0;
}