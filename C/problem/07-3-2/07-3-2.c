//0�̻� 100������ ���� �߿��� ¦���� ���� ����ϴ� ���α׷��� �����ϵ�, 
//do~while�� ������� �����غ���. ����� ������ ����� 2550�� �Ǿ���Ѵ�.
#include <stdio.h>

int main(void)
{
    int even=2, num=1, result=0;

    do
    {
        result += even*num;
        num++;
    } while (num<51);
    
    printf("¦���� �� : %d\n", result);

    return 0;

}