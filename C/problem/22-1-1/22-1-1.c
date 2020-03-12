//문자열 형태의 '종업원 이름' 과 문자열 형태의 '주민등록번호' 그리고 정수 형태의 '급여정보'를 저장 할 수 있는 employee
//라는 이름의 구조체를 정의해보자. 그리고 나서 employee 구조체 변수를 하나 선언한 다음, 프로그램 사용자가 입력하는 정보로 이 변수를
//채우자. 그리고 마지막으로 구조체 변수에 채워진 데이터를 출력해보자.
#include <stdio.h>

struct employee
{
    char name[20];
    char ID[20];
    int pay;
};

int main(void)
{
    struct employee info;

    printf("이름 입력 : ");
    scanf("%s", info.name);
    printf("번호 입력 : ");
    scanf("%s", info.ID);
    printf("급여 입력 : ");
    scanf("%d", &(info.pay));

    printf("이름 : %s\n", info.name);
    printf("번호 : %s\n", info.ID);
    printf("급여 : %d\n", info.pay);

    return 0;
}