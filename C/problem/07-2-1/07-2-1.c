//프로그램 사용자로부터 총 5개의 정수를 입력 받아서, 그 수의 합을 출력하는 프로그램을 작성해보자.
//단! 한 가지 조건의 있다. 정수는 반드시 1이상이어야 한다. 만약에 1미만의 수가 입력되는 경우에는,
//이를 입력으로 인정하지 않고 재 입력을 요구해야 한다 그래서 결국 1이상의 정수 5개를 모두
//입력 받을 수 있도록 프로그램을 완성해야 한다.

#include <stdio.h>

int main(void)
{
    int result=0, num=0, input=1;

    while(num<5)
    {

        printf("정수를 입력하세요 : ");
        scanf("%d", &input);
        
        while(input<1)
        {
            printf("정수를 다시 입력하세요 : ");
            scanf("%d", &input);
        }

        result += input;
        num++;
    }

    printf("입력한 정수의 합 : %d\n", result);

    return 0;
}