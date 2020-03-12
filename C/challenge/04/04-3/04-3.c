//복소수(Complex Number)를 나타내는 구조체를 정의하고, 복소수의 덧셈과 곱셈을 위한 함수를 각각 정의하자.
//그리고 이를 기반으로 프로그램 사용자로부터 두 개의 복소수 정보를 입력 받아서 두 복소수의 덧셈과 곱셈의 결과를 출력하는 프로그램을 작성하자.
//실행 예 생략
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

    printf("복소수 입력 1[실수 허수] : ");
    scanf("%lf %lf", &input1.real, &input1.imag);
    printf("복소수 입력 2[실수 허수] : ");
    scanf("%lf %lf", &input2.real, &input2.imag);

    result_add = AddComplex(input1, input2);
    result_mul = MulComplex(input1, input2);

    printf("합의 결과]실수 : %f 허수 : %f\n", result_add.real, result_add.imag);
    printf("곱의 결과]실수 : %f 허수 : %f\n", result_mul.real, result_mul.imag);

    return 0;
}