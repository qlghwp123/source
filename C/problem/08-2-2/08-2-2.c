//다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성해보자
//  AZ
//+ ZA
//----
//  99
//참고로, 가능한 모든 수의 조합을 시도하기 위해서는 반복문을 중첩시켜야 한다.

#include <stdio.h>

int main(void)
{
    int A, Z, i, j;
    int AZ, ZA, result;

    for(i=0;i<10;i++)
    {
        A = 1;
        A *= i*10;
        
        for(j=0;j<10;j++)
        {
            Z=j;

            AZ=A+Z;
            ZA=Z*10+A/10;
            
            result = AZ + ZA;

            if(result == 99)
                break;
            else
                continue;
            
        }

        if(result == 99)
            printf("(%d, %d)\n", i, j);
    }

    return 0;
}