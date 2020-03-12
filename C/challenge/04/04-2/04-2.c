//도전1에서 구현한 프로그램에서 변경을 조금 가하자. 구조체 배열을 선언하는 것이 아니라, 구조체 포인터 배열을 선언하고
//구조체 변수를 동적으로 할당하는 형태로 프로그램을 재 구현해보자.
//즉 프로그램의 형태가 다음과 같이 변경되어야 한다.
//그림 생략
//그리고 도전 1에서 구현한 방법보다 도전 2에서 구현한 방법이 지니는 장점이 무엇인지도 생각해보자.

//이 방법이 지니는 장점은 배열 크기 내에서 구조체 포인터 배열 요소들을 쉽게 추가/삭제가 가능하다는 점이다.
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

    printf("도서 정보 입력\n");
    for (i = 0; i < 3; i++)
    {
        printf("저자 : ");
        fgets(list[i]->author, sizeof(list[i]->author), stdin);
        list[i]->author[strlen(list[i]->author) - 1] = 0;

        printf("제목 : ");
        fgets(list[i]->name, sizeof(list[i]->name), stdin);
        list[i]->name[strlen(list[i]->name) - 1] = 0;

        printf("페이지 수 : ");
        scanf("%d", &list[i]->page);
        ClearLineFromReadBuffer();
    }

    printf("\n도서 정보 출력\n");

    for (i = 0; i < 3; i++)
    {
        printf("book %d\n", i + 1);
        printf("저자 : %s\n", list[i]->author);
        printf("제목 : %s\n", list[i]->name);
        printf("페이지 수 : %d\n", list[i]->page);
    }

    for (i = 0; i < 3; i++)
        free(list[i]);
}