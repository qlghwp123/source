/*
논리 연산자 우선순위 그리고 if문이 많은 줄로 이루어져있을 때 한 줄로 쓸 수 있다는 점을 보여준다.
*/

#include <stdio.h>

int main(void)
{
    int num;

    for(num=1;num<100;num++)
    {
        if(num%3 == 0 || num%4 == 0)
            printf("3또는 4의 배수 : %d\n", num);
    }

    /*
    for(num=1;num<100;num++)
        if( (num%3 == 0) || (num%4 == 0) )
            printf("3또는 4의 배수 : %d\n", num);
    */

    return 0;
    
}