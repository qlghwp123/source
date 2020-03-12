/*
fscanf의 사용법을 보이고 있다.
fprintf 와 약간의 차이점은
파일의 끝에 도달함을 알기 위해서 변수 하나를 설정하여 fscanf의 반환 값을 받아 비교한다.
*/

#include <stdio.h>

int main(void)
{
    char name[10];
    char sex;
    int age;

    FILE *fp = fopen("friend.txt", "rt");
    int ret;

    while (1)
    {
        ret = fscanf(fp, "%s %c %d", name, &sex, &age);
        if (ret == EOF)
            break;
        printf("%s %c %d\n", name, sex, age);
    }
    fclose(fp);

    return 0;
}