//������ ���� ������ ���α׷��� �ۼ��غ���. [����, ���ڸ�, ������ ��]�� ���� ������ ������ �� �ִ� ����ü�� �����ϰ�,
//����ü �迭�� �����ؼ� ������ ���� ������ �����ϴ� ������ �ۼ��� ����.
//main�Լ������� ����ڷκ��� 3���� ������ ���� ������ �Է� �ް�, �Է��� ������ ������ ���� ������ ����� �ֵ��� ����.
//���� ��� ����
#include <stdio.h>
#include <string.h>

#define MAX 1000

void ClearLineFromReadBuffer(void)
{
    while (getchar() != '\n')
        ;
}

typedef struct
{
    char author[MAX];
    char name[MAX];
    int page;
} Book;

int main(void)
{
    int i;
    Book list[3];

    printf("���� ���� �Է�\n");
    for (i = 0; i < 3; i++)
    {
        printf("���� : ");
        fgets(list[i].author, sizeof(list[i].author), stdin);
        list[i].author[strlen(list[i].author) - 1] = 0;

        printf("���� : ");
        fgets(list[i].name, sizeof(list[i].name), stdin);
        list[i].name[strlen(list[i].name) - 1] = 0;

        printf("������ �� : ");
        scanf("%d", &list[i].page);
        ClearLineFromReadBuffer();
    }

    printf("\n���� ���� ���\n");

    for (i = 0; i < 3; i++)
    {
        printf("book %d\n", i + 1);
        printf("���� : %s\n", list[i].author);
        printf("���� : %s\n", list[i].name);
        printf("������ �� : %d\n", list[i].page);
    }
}