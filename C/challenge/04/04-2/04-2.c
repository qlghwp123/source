//����1���� ������ ���α׷����� ������ ���� ������. ����ü �迭�� �����ϴ� ���� �ƴ϶�, ����ü ������ �迭�� �����ϰ�
//����ü ������ �������� �Ҵ��ϴ� ���·� ���α׷��� �� �����غ���.
//�� ���α׷��� ���°� ������ ���� ����Ǿ�� �Ѵ�.
//�׸� ����
//�׸��� ���� 1���� ������ ������� ���� 2���� ������ ����� ���ϴ� ������ ���������� �����غ���.

//�� ����� ���ϴ� ������ �迭 ũ�� ������ ����ü ������ �迭 ��ҵ��� ���� �߰�/������ �����ϴٴ� ���̴�.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

void ClearLineFromReadBuffer(void)
{
    while (getchar() != '\n')
        ;
}

typedef struct book
{
    char author[MAX];
    char name[MAX];
    int page;
} Book;

int main(void)
{
    Book *list[3];
    int i;

    for (i = 0; i < 3; i++)
        list[i] = (Book *)calloc(sizeof(Book), 1);

    printf("���� ���� �Է�\n");
    for (i = 0; i < 3; i++)
    {
        printf("���� : ");
        fgets(list[i]->author, sizeof(list[i]->author), stdin);
        list[i]->author[strlen(list[i]->author) - 1] = 0;

        printf("���� : ");
        fgets(list[i]->name, sizeof(list[i]->name), stdin);
        list[i]->name[strlen(list[i]->name) - 1] = 0;

        printf("������ �� : ");
        scanf("%d", &list[i]->page);
        ClearLineFromReadBuffer();
    }

    printf("\n���� ���� ���\n");

    for (i = 0; i < 3; i++)
    {
        printf("book %d\n", i + 1);
        printf("���� : %s\n", list[i]->author);
        printf("���� : %s\n", list[i]->name);
        printf("������ �� : %d\n", list[i]->page);
    }

    for (i = 0; i < 3; i++)
        free(list[i]);
}