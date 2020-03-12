//섭씨(Celsius)온도를 입력하면 화씨(Fahrenheit)온도를 반환하는 CelToFah라는 이름의 함수와
//그 반대로 화씨 온도를 입력하면 섭씨 온도를 반환하는 FahToCel라는 이름의 함수를 정의하고 이 두
//함수를 호출하는 예제를 완성해보자. 참고로 섭씨와 화씨 간 온도변환의 공식은 다음과 같다.
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

    printf("화씨(0), 섭씨(1) : ");
    scanf("%d", &choose);

    printf("온도를 입력하세요. : ");
    scanf("%lf", &temp);

    if(choose)
    {
        fah=CelToFah(temp);

        printf("화씨 : %f\n", fah);
    }
    else
    {
        cel=FahToCel(temp);

        printf("섭씨 : %f\n", cel);
    }
    return 0;
}