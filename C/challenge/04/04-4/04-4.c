//문자열을 저장하고 있는 파일을 열어서 A와 P로 시작하는 단어의 수를 세어서 출력하는 프로그램을 작성해 보자.
//단 모든 단어는 공백문자(스페이스바, \t, \n)에 의해서 구분된다고 가정한다.
//실행결과 생략
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char temp[100];
    int ret;
    int a_count = 0;
    int p_count = 0;

    fp = fopen(argv[1], "rt");

    while (1)
    {
        /* 연속으로 A, P가 나오면 잘못 인식. 답지대로 하는게 맞음.
        temp = fgetc(fp);
        if (temp == '\n' || temp == '\t' || temp == ' ')
            continue;
        else if (temp == 'A')
            a_count++;
        else if (temp == 'P')
            p_count++;
        */
        //답지
        fscanf(fp, "%s", temp);

        if (temp[0] == 'A' || temp[0] == 'a')
            a_count++;
        else if (temp[0] == 'P' || temp[0] == 'p')
            p_count++;

        if (feof(fp) != 0)
            break;
    }
    printf("A로 시작하는 단어의 수 : %d\n", a_count);
    printf("P로 시작하는 단어의 수 : %d\n", p_count);

    fclose(fp);

    return 0;
}