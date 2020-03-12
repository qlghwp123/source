//���̰� 4X4 int �� 2���� �迭�� �����ϰ�, ��� ��Ҹ� �Ʒ� �׸��� ���ʿ� �ִ� ���¿� �����ϰ� �ʱ�ȭ����.
//�׸��� �迭�� ��ҵ��� ������ �������� 90���� �̵����Ѽ� �� ����� ����ϴ� ���α׷��� �ۼ��غ���.
//����� �迭�� ����Ǵ� ���´� ������ ����.
//�׸� ����
#include <stdio.h>

void PrintSqure(int (*squarePtr)[4], int len)
{
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%5d", squarePtr[i][j]);
        printf("\n");
    }

    printf("\n");
}

void RotateSquare(int (*squarPtr)[4], int len)
{
    int temp[4][4] = {0};
    int i, j;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            temp[j][3 - i] = squarPtr[i][j];

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            squarPtr[i][j] = temp[i][j];
}

int main(void)
{
    int square[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    PrintSqure(square, 4);

    //�̺κ��� �ݺ������� �������� �� ������ ���̴�.
    RotateSquare(square, 4);
    PrintSqure(square, 4);

    RotateSquare(square, 4);
    PrintSqure(square, 4);

    RotateSquare(square, 4);
    PrintSqure(square, 4);

    return 0;
}