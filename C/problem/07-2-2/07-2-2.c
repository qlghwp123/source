//아래의 출력을 보이는 프로그램을 작성해보자.
//*
//O*
//OO*
//OOO*
//OOOO*

#include <stdio.h>

int main(void)
{
    int num=0, in_num=0;

    while(num<5)
    {
        in_num = 0;

        while(in_num<num)
        {
            printf("O");
            in_num++;
        }

        printf("*\n");
        
        num++;
    }

    return 0;
}