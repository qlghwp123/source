//���ڷ� ���޵� ����ŭ�� �Ǻ���ġ ������ ����ϴ� �Լ��� �����غ���.
//���� �� ���α׷� ����ڰ� 5�� �Է��ϸ� 0�������� �����ؼ� �� 5���� �Ǻ���ġ ������ ����ؾ� �Ѵ�.
//����� �Ǻ���ġ ������ ������ ����.
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
//�̷��� �Ǻ���ġ ������ 0�� 1���� �����Ѵ�. �׸��� �� ��° ������ �������ʹ� ������ �� ���� ������ �����ȴ�.
//��, �� ��° ���� 0�� 1�� ������ �̷����� 1�� �ǰ�, �� ��° ���� 1�� 1�� ������ �̷����� 2�� �ȴ�.
#include <stdio.h>

void fibonacci(int num)
{
    int fir, sec, i, result;

    fir = 0;
    sec = 1;
        
    result = 0;

    if(num == 1)
        printf("%d\n", fir);
    else if(num == 2)
        printf("%d %d\n", fir, sec);
    else
    {
        printf("%d %d ", fir, sec);

        for(i=0;i<num-2;i++)
        {
            result = fir + sec;
            printf("%d ", result);
            fir = sec;
            sec = result;
        }

        printf("\n");
    }

}

int main(void)
{
    int num;

    printf("���� �Է��ϼ��� : ");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}
