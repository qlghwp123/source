//프로그램 사용자로부터 두 점의 x, y 좌표를 입력받아서,
//두 점이 이루는 직사각형의 넓이를 계산하여 출력하는 프로그램을
//작성해보자. 단, 좌 상단의 x, y 좌표 값이 우 하단의 x, y
//좌표 값보다 작다고 가정, 좌 상단의 좌표정보를 먼저 입력
//받는 형태로 예제를 작성해보자. 참고할 수 있는 실행의 예는
//다음과 같다.
//좌 상단의 x, y 좌표 : 2 4
//우 하단의 x, y 좌표 : 4 8
//두 점이 이루는 직사각형의 넓이는 8 입니다.
#include <stdio.h>

int main(void)
{
    int left_x, left_y;
    int right_x, right_y;
    int result;

    printf("좌 상단의 x, y 좌표 : ");
    scanf("%d %d", &left_x, &left_y);
    printf("우 하단의 x, y 좌표 : ");
    scanf("%d %d", &right_x, &right_y);

    result = (right_x-left_x)*(right_y-left_y);

    printf("두 점이 이루는 직사각형의 넓이는 8 입니다.\n");

    return 0;
}