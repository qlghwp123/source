//�Ʒ��� ����� ���̴� ���α׷��� �ۼ��غ���.
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