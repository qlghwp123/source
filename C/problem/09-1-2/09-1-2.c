//����(Celsius)�µ��� �Է��ϸ� ȭ��(Fahrenheit)�µ��� ��ȯ�ϴ� CelToFah��� �̸��� �Լ���
//�� �ݴ�� ȭ�� �µ��� �Է��ϸ� ���� �µ��� ��ȯ�ϴ� FahToCel��� �̸��� �Լ��� �����ϰ� �� ��
//�Լ��� ȣ���ϴ� ������ �ϼ��غ���. ����� ������ ȭ�� �� �µ���ȯ�� ������ ������ ����.
//Fah=1.8 X Cel + 32
#include <stdio.h>

double CelToFah(double cel)
{
    double fah;

    fah = 1.8*cel+32;

    return fah;
}

double FahToCel(double fah)
{
    double cel;

    cel = (fah-32)/1.8;

    return cel;
}

int main(void)
{
    double cel, fah, temp;
    int choose;

    printf("ȭ��(0), ����(1) : ");
    scanf("%d", &choose);

    printf("�µ��� �Է��ϼ���. : ");
    scanf("%lf", &temp);

    if(choose)
    {
        fah=CelToFah(temp);

        printf("ȭ�� : %f\n", fah);
    }
    else
    {
        cel=FahToCel(temp);

        printf("���� : %f\n", cel);
    }
    return 0;
}