//���Ҽ�(Complex Number)�� ��Ÿ���� ����ü�� �����ϰ�, ���Ҽ��� ������ ������ ���� �Լ��� ���� ��������.
//�׸��� �̸� ������� ���α׷� ����ڷκ��� �� ���� ���Ҽ� ������ �Է� �޾Ƽ� �� ���Ҽ��� ������ ������ ����� ����ϴ� ���α׷��� �ۼ�����.
//���� �� ����
#include <stdio.h>

typedef struct complex
{
    double real;
    double imag;
} Complex;

Complex AddComplex(Complex n1, Complex n2)
{
    Complex Cval;

    Cval.real = n1.real + n2.real;
    Cval.imag = n1.imag + n2.imag;

    return Cval;
}

Complex MulComplex(Complex n1, Complex n2)
{
    Complex Cval;

    Cval.real = n1.real * n2.real - n1.imag * n2.imag;
    Cval.imag = n1.imag * n2.real + n1.real * n2.imag;

    return Cval;
}

int main(void)
{
    Complex input1, input2;
    Complex result_add, result_mul;

    printf("���Ҽ� �Է� 1[�Ǽ� ���] : ");
    scanf("%lf %lf", &input1.real, &input1.imag);
    printf("���Ҽ� �Է� 2[�Ǽ� ���] : ");
    scanf("%lf %lf", &input2.real, &input2.imag);

    result_add = AddComplex(input1, input2);
    result_mul = MulComplex(input1, input2);

    printf("���� ���]�Ǽ� : %f ��� : %f\n", result_add.real, result_add.imag);
    printf("���� ���]�Ǽ� : %f ��� : %f\n", result_mul.real, result_mul.imag);

    return 0;
}