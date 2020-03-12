/*
해당 case 문만 실행되도록 해놨으면 좋을텐데 다 실행시켜 놓은 이유에 대한 예제.
일장일단.
*/

#include <stdio.h>

int main(void)
{
    char sel;
    printf("M 오전, A 오후, E 저녁\n");
    printf("입력 : ");
    scanf("%c", &sel);

    switch (sel)
    {
        case 'M':
        case 'm':
            printf("Morning \n");
            break;
        case 'A':
        case 'a':
            printf("Afternoon\n");
            break;
        case 'E':
        case 'e':
            printf("Evening\n");
            break;// 불필요, 맨 마지막이기 때문.
    }
    
    return 0;
}