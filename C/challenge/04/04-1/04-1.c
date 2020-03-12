//간단한 도서 관리용 프로그램을 작성해보자. [제목, 저자명, 페이지 수]에 대한 정보를 저장할 수 있는 구조체를 정의하고,
//구조체 배열을 선언해서 도서에 대한 정보를 저장하는 구조로 작성해 보자.
//main함수에서는 사용자로부터 3권의 도서에 대한 정보를 입력 받고, 입력이 끝나면 도서에 대한 내용을 출력해 주도록 하자.
//실행 결과 생략
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

    printf("도서 정보 입력\n");
    for (i = 0; i < 3; i++)
    {
        printf("저자 : ");
        fgets(list[i].author, sizeof(list[i].author), stdin);
        list[i].author[strlen(list[i].author) - 1] = 0;

        printf("제목 : ");
        fgets(list[i].name, sizeof(list[i].name), stdin);
        list[i].name[strlen(list[i].name) - 1] = 0;

        printf("페이지 수 : ");
        scanf("%d", &list[i].page);
        ClearLineFromReadBuffer();
    }

    printf("\n도서 정보 출력\n");

    for (i = 0; i < 3; i++)
    {
        printf("book %d\n", i + 1);
        printf("저자 : %s\n", list[i].author);
        printf("제목 : %s\n", list[i].name);
        printf("페이지 수 : %d\n", list[i].page);
    }
}