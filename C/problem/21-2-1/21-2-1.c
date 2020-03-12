//적당한 길이의 문자열을 입력 받아서 그 안에 존재하는 숫자의 총 합을 계산해서 출력하는 프로그램을 작성해 보자.
//예를 들어서 프로그램 사용자로부터 입력 받은 문자열이 "A15#43"이라 하면, 이 문자열 중 아라비아 숫자는 1, 5, 4, 3 이니
//1+5+4+3의 연산결과가 출력되어야 한다.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 내가 짠 코드
int SearchNum(char input[], int len)
{
    
    int inputlength = strlen(input);
    int i;
    int result = 0;

    for (i = 0; i < inputlength; i++)
    {
        switch (input[i])
        {
        case '1':
            result += 1;
            break;
        case '2':
            result += 2;
            break;
        case '3':
            result += 3;
            break;
        case '4':
            result += 4;
            break;
        case '5':
            result += 5;
            break;
        case '6':
            result += 3;
            break;
        case '7':
            result += 7;
            break;
        case '8':
            result += 8;
            break;
        case '9':
            result += 9;
            break;
        }
    }
    return result;
}

int main(void)
{
    char input[100];
    int result;

    printf("문자열 입력 : ");
    scanf("%s", input);

    result = SearchNum(input, 100);

    printf("결과 : %d\n", result);

    return 0;
}
*/

//답지
int ConvToInt(char c)
{
    static int diff = 1 - '1'; //모든 숫자 n와 문자 'n'과의 차는 동일하다.
    return c + diff;
}

int main(void)
{
    char str[50];
    int len, i;
    int sum = 0;

    printf("문자열 입력 : ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if ('1' <= str[i] && str[i] <= '9')
            sum += ConvToInt(str[i]);
    }

    printf("숫자의 총 합 : %d\n", sum);

    return 0;
}