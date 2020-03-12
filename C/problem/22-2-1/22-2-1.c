//앞서 문제22-1에서 정의한 employee 구조체를 기반으로 길이가 3인 배열을 선언하자.
//그리고 세 명의 정보를 프로그램 사용자로부터 입력 받아서 배열에 저장한 다음,
//배열에 저장된 데이터를 순서대로 출력하는 예제를 작성해보자.
#include <stdio.h>

struct employee
{
    char name[20];
    char ID[20];
    int pay;
};

int main(void)
{
    struct employee arr[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("이름 입력 : ");
        scanf("%s", arr[i].name);
        printf("번호 입력 : ");
        scanf("%s", arr[i].ID);
        printf("봉급 입력 : ");
        scanf("%d", &arr[i].pay);
    }

    for (i = 0; i < 3; i++)
        printf("이름 : %s 번호 : %s 봉급 : %d\n", arr[i].name, arr[i].ID, arr[i].pay);

    return 0;
}