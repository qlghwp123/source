//10���� �Ҽ�(Prime Number)�� ����ϴ� ���α׷��� �ۼ��� ����. ����� ���� num�� 1�� num���� �ۿ� �������� �ʴ´ٸ� �̴� �Ҽ��� �ش��Ѵ�.
//���� 3�� �Ҽ��̴�. �׷��� 4�� �Ҽ��� �ƴϴ�. 1, 2, 4�� �������� �����̴�.
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