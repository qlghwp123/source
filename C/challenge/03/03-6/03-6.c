//���� ����
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GetComputer(int computer[], int len)
{
    int i, j;
    int count;

    while (1)
    {
        count = 0;
        for (i = 0; i < 3; i++) //�Է�
            computer[i] = rand() % 10;

        for (i = 0; i < 3; i++) //�˻�
            for (j = 0; j < 3; j++)
                if (computer[i] == computer[j])
                    count++;

        if (count == 3)
            break;
    }
}

void StrikeBall(void)
{
    int count = 0, i, j;
    int user[3];
    int computer[3];
    int strike = 0, ball = 0;

    srand(time(NULL));

    while (strike != 3)
    {
        printf("3���� ���� ���� : ");
        scanf("%d %d %d", &user[0], &user[1], &user[2]);

        GetComputer(computer, 3);

        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++) //�� �κ��� ���� ������ ���°� �´�.
                if (user[i] == computer[j] && i == j)
                    strike++;
                else if (user[i] == computer[j] && i != j)
                    ball++;

        printf("%d��° ���� ���: %dstrike, %dball!!\n", ++count, strike, ball);
    }
}

int main(void)
{
    printf("Start Game!\n");

    StrikeBall();

    printf("Game Over!\n");

    return 0;
}