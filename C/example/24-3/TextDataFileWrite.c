/*
파일에 문자열을 저장을 볼 수 있다.
*/
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("simple.txt", "wt");

    if (fp == NULL)
    {
        puts("파일 오픈 실패!");
        return -1;
    }

    fputc('A', fp);
    fputc('B', fp);
    fputs("My name is Lee\n", fp);
    fputs("Your name is Yoon\n", fp);
    fclose(fp);

    return 0;
}