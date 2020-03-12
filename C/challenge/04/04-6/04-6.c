//문제, 실행 예 생략
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct phonebook
{
    char name[MAX];
    char number[MAX];
} PhoneBook;

void Insert(PhoneBook *list, int *count)
{
    printf("[ INSERT ]\n");

    printf("Input Name : ");
    scanf("%s", list[*count].name);
    printf("Input Tel Number : ");
    scanf("%s", list[*count].number);

    (*count)++;

    printf("\t\t Data Inserted\n");
}

void Delete(PhoneBook *list, int *count)
{
    int i;
    char temp[MAX];
    int D = 0;

    printf("Input Name : ");
    scanf("%s", temp);

    for (i = 0; i < *count; i++)
        if (strcmp(temp, list[i].name) == 0)
        {
            D = 1;
            list[i].name[0] = 0;
            list[i].number[0] = 0;
        }

    if (!D)
        printf("Can't find it\n");
    else
    {
        printf("Delete complete!\n");
        (*count)--;
    }
}

void Search(PhoneBook *list, int count)
{
    int i;
    char temp[MAX];
    int tiktok = 0;

    printf("Input Name : ");
    scanf("%s", temp);

    for (i = 0; i < count; i++)
    {
        if (strcmp(temp, list[i].name) == 0)
            printf("Name : %s   Tel : %s\n", list[i].name, list[i].number);
        else
            tiktok++;
    }

    if (tiktok == count)
        printf("Can't find it\n");
    else
        printf("Search Complete!\n");
}

void Print(PhoneBook *list, int count)
{
    int i;

    printf("[ Print All Data ]\n");

    if (count == 0)
        printf("No Data\n");
    else
        for (i = 0; i < count; i++)
            printf("Name : %s   Tel : %s\n", list[i].name, list[i].number);
}

int main(void)
{
    int input = 0;
    PhoneBook *list = (PhoneBook *)calloc(sizeof(PhoneBook), MAX);
    int count = 0;

    while (input != 5)
    {
        printf("***** MENU *****\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Print All\n");
        printf("5. Exit\n");
        printf("Choose the item : ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            Insert(list, &count);
            break;
        case 2:
            Delete(list, &count);
            break;
        case 3:
            Search(list, count);
            break;
        case 4:
            Print(list, count);
            break;
        case 5:
            break;
        default:
            printf("잘못 누르셨습니다.\n");
        }
    }
}