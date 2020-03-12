//회문(Palindrome)은 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어들을 뜻한다.
//예를 들어서 level, bob과 같은 단어들은 회문에 속한다.
//이에 우리는 인자로 전달되는 영단어가 회문인지 아닌지를 판단해서 그 결과를 출력하는 기능의 함수를 정의하고
//이에 적절한 main함수를 정의해보고자 한다. 단 구현의 편의를 위해서 대소문자까지 일치해야 회문으로 인정하기로 하겠다.
//(이는 어디까지나 구현의 편의를 고려한 제약사항일 뿐이다.)
//문자열 입력 : noon
//회문 입니다.
#include <stdio.h>

void Palindrome(char str[], int len)
{
    int i;
    int count = 0;

    for (i = 0; i < len / 2; i++)
        if (str[i] != str[len - 1 - i])
        {
            printf("회문이 아닙니다.\n");
            return;
        }

    printf("회문 입니다.\n");
}

int main(void)
{
    char str[30];
    int len = 0;

    printf("문자열 입력 : ");
    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    Palindrome(str, len);

    return 0;
}