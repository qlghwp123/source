/*
#else�� ���Ժκ��� �� �� �ִ�.
*/
#include <stdio.h>

#define HIT_NUM 5

int main(void)
{
#if HIT_NUM == 5
    puts("��ũ�� ��� HIT_NUM�� ���� 5�Դϴ�.\n");
#else
    puts("��ũ�� ��� HIT_NUM�� ���� 5�� �ƴմϴ�.\n");
#endif

    return 0;
}