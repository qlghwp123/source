//두 개의 텍스트 파일이 같은지 다른지를 확인하는 프로그램을 작성해 보자.
//단순히 공백문자 하나가 차이를 보여도 두 텍스트 파일은 다른 것으로 판별이 나야 한다.
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp1;
    FILE *fp2;
    int D = 1;
    char c1, c2;

    fp1 = fopen(argv[1], "rt");
    fp2 = fopen(argv[2], "rt");

    while (1)
    {
        c1 = fgetc(fp1);
        c2 = fgetc(fp2);

        if (c1 != c2)
        {
            D = 0;
            break;
        }

        if (feof(fp1) != 0 && feof(fp2) != 0)
            break;
    }

    if (D)
        printf("두 개의 파일은 완전히 일치 합니다.\n");
    else
        printf("두 개의 파일은 서로 다릅니다.\n");

    fclose(fp1);
    fclose(fp2);
}