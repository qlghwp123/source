//������ ������ ���ڿ��� �Է� �޾Ƽ� �� �ȿ� �����ϴ� ������ �� ���� ����ؼ� ����ϴ� ���α׷��� �ۼ��� ����.
//���� �� ���α׷� ����ڷκ��� �Է� ���� ���ڿ��� "A15#43"�̶� �ϸ�, �� ���ڿ� �� �ƶ��� ���ڴ� 1, 5, 4, 3 �̴�
//1+5+4+3�� �������� ��µǾ�� �Ѵ�.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* ���� § �ڵ�
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

    printf("���ڿ� �Է� : ");
    scanf("%s", input);

    result = SearchNum(input, 100);

    printf("��� : %d\n", result);

    return 0;
}
*/

//����
int ConvToInt(char c)
{
    static int diff = 1 - '1'; //��� ���� n�� ���� 'n'���� ���� �����ϴ�.
    return c + diff;
}

int main(void)
{
    char str[50];
    int len, i;
    int sum = 0;

    printf("���ڿ� �Է� : ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if ('1' <= str[i] && str[i] <= '9')
            sum += ConvToInt(str[i]);
    }

    printf("������ �� �� : %d\n", sum);

    return 0;
}