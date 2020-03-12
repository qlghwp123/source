//문제 1과 2에서 생성한 파일에 저장된 정보 전체를 출력하는 프로그램을 작성하자.
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("mystroy.txt", "rt");
    char str[50];

    while (fgets(str, sizeof(str), fp) != NULL)
        printf("%s", str);

    return 0;
}