//그림 08-10의 if...else if...else는 변수 n에 저장된 값의 범위를 출력하도록 구성되어 있다.
//필자는 이것을 예로 해서 switch문이 모든 if...else if...else를 대신하기에는 무리가 있음을 설명하였지만,
//그림 08-10의 if...else if...else는 약간의 조작(?)을 통해서 switch문으로 변경이 가능하다.
//따라서 이를 switch문으로 변경해서 실행해보기 바란다.

//답지를 봐버렸다...
#include <stdio.h>

int main(void)
{
    int num;

    printf("0 또는 양의 정수를 입력하세요 : ");
    scanf("%d", &num);

    switch (num/10)
    {
        case 0:
            printf("0이상 10미만\n");
            break;
        case 1:
            printf("10이상 20미만\n");
            break;
        case 2:
            printf("20이상 30미만\n");
            break;
        default:
            printf("30이상\n");
            break;
    }
    return 0;
}