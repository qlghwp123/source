//���α׷� ����ڷκ��� ��(second)�� �Է� ���� �Ŀ�, �̸� [��, ��, ��]�� ���·� ����ϴ� ���α׷��� �ۼ��� ����.
//��(second)�Է� : 3615
//[h:1, m:0, s:15]
#include <stdio.h>

void Call_time(int sec)
{
    int hour, min, second;
    int temp=sec;

    hour=temp/3600;
    temp -= hour*3600;
    
    min=temp/60;
    temp -= min*60;

    second = temp;

    printf("[h: %d, m: %d, s: %d]\n", hour, min, second);
}

int main(void)
{
    int sec;

    printf("��(second)�Է� : ");
    scanf("%d", &sec);

    Call_time(sec);

    return 0;
}