#include <stdio.h>

int main(void)
{
    char arr[10];
    scanf("%s", arr);
    //fgets(arr, sizeof(arr), stdin);

    printf("%s", arr);
    return 0;
}