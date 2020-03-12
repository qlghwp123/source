/*
스트림을 생성하는 fopen 을 보여주는 예제이다.
*/
#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("data.txt", "wt");

    if (fp == NULL)
    {
        puts("파일 오픈 실패!");
        return -1;
    }

    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);

    fclose(fp);

    return 0;
}