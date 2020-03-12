/*
매개변수를 이중 포인터로 사용하여 문자열을 출력한다.
*/

#include <stdio.h>

void ShowAllString(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
        printf("%s \n", argv[i]);
}

int main(void)
{
    char *str[3] = {
        "C Programming",
        "C++ Programming",
        "Java Programming"};

    ShowAllString(3, str);

    return 0;
}