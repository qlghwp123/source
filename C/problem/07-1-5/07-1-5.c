//프로그램 사용자로부터 입력 받은 정수의 평균을 출력하는
//프로그램을 작성하되 다음 두 가지 조건을 만족시켜야 한다.
//  "먼저 몇 개의 정수를 입력할 것인지 프로그램 사용자에게 묻는다.
//   그리고 그 수만큼 정수를 입력받는다."
//  "평균 값은 소수점 이하까지 계산해서 출력한다."

#include <stdio.h>

int main(void)
{
    int howMany=0;
    int num=0;
    int input;
    double result=0.0;

    printf("몇 개의 정수를 입력할 것 인가요? : ");
    scanf("%d", &howMany);

    while(num<howMany)
    {
        printf("정수 입력 : ");
        scanf("%d", &input);
        
        result += (double)input;
        num++;
    }

    result /= (double) howMany;

    printf("평균 값 : %f\n", result);

    return 0;
}