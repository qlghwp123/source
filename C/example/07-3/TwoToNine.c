/*
2~9�ܱ��� while�� ��ø�� ����� ������ ��� �����̴�.
*/

#include <stdio.h>

int main(void)
{
    int cur=2;
    int is;
    
    while(cur<10)
    {
        is=1;

        while(is<10)
        {
            printf("%d X %d = %d\n", cur, is, cur*is);
            is++;
        }

        printf("\n");
        cur++;
    }
    return 0;
}