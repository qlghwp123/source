//�л��� ��ä ��������� ���� ������ ����ϴ� ���α׷��� �ۼ�����. �л��� ������ 90���̻��̸� A,
//80�� �̻��̸� B, 70�� �̻��̸� C, 50�� �̻��̸� D, �׸��� �� �̸��̸� F��!
//���α׷� ���� �� ������� ����, ����, ������ ������ �Է� �޴´�. �׸��� ����� ���� ���� �׿� ������ ������ ����ϸ� �ȴ�.

#include <stdio.h>

int main(void)
{
    int lang, eng, math;
    int i;
    double avg;

    printf("���� ���� ���� ������ �Է��ϼ���. : ");
    scanf("%d %d %d", &lang, &eng, &math);

    avg = (lang + eng + math) / 3.0;

      if(avg >= 90.0)
        printf("A\n");
      else if(avg >= 80.0)
        printf("B\n");
      else if(avg >= 70.0)
        printf("C");
     else if(avg >= 50.0)
        printf("D\n");
      else
        printf("F\n");
    

    return 0;
}