//���α׷� ����ڷκ��� �Է� ���� ������ ����� ����ϴ�
//���α׷��� �ۼ��ϵ� ���� �� ���� ������ �������Ѿ� �Ѵ�.
//  "���� �� ���� ������ �Է��� ������ ���α׷� ����ڿ��� ���´�.
//   �׸��� �� ����ŭ ������ �Է¹޴´�."
//  "��� ���� �Ҽ��� ���ϱ��� ����ؼ� ����Ѵ�."

#include <stdio.h>

int main(void)
{
    int howMany=0;
    int num=0;
    int input;
    double result=0.0;

    printf("�� ���� ������ �Է��� �� �ΰ���? : ");
    scanf("%d", &howMany);

    while(num<howMany)
    {
        printf("���� �Է� : ");
        scanf("%d", &input);
        
        result += (double)input;
        num++;
    }

    result /= (double) howMany;

    printf("��� �� : %f\n", result);

    return 0;
}