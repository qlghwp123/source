//���α׷� ����ڷκ��� ���ĺ� ���ڸ� �ϳ� �Է� �޾Ƽ�, �Է� ���� ���ڰ� �빮�ڸ� �̸� �ҹ��ڷ� ��ȯ�ؼ� ������ְ�,
//�Է� ���� ���ڰ� �ҹ��ڸ� �̸� �빮�ڷ� ��ȯ�ؼ� ������ִ� ���α׷��� �ۼ��غ���.
//��, ���� ����¿��� getchar �Լ��� putchar �Լ��� ����ϱ�� ����.
//�׸��� ���α׷� ����ڰ� ���ĺ� �̿��� ���ڸ� �Է��ϴ� ��쿡�� �׿� ���� ���� �޽����� ������ ����ϱ�� ����.
#include <stdio.h>

int main(void)
{
    int input;

    input = getchar();

    if (input >= 65 && input <= 90)
    {
        input += 32;
        putchar(input);
    }
    else if (input >= 97 && input <= 122)
    {
        input -= 32;
        putchar(input);
    }
    else
    {
        putchar(78);
        putchar(111);
    }

    return 0;
}