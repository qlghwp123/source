//���� ���� �� ������ ������. ����ڷκ��� ���� ���� �� �߿��� �ϳ��� �Է¹޴´�.
//�׸��� ��ǻ�ʹ� ���� ������ ���ؼ� ���� ���� �� �߿��� �ϳ��� �����ϰ� �Ѵ�.
//�� ���� ���ؼ� ���ڿ� ���ڸ� �����ִ� ���α׷��� �ۼ��� ����.
//�� ���α׷��� ������ ����ڰ� �� ������ ��ӵǾ�� �ϰ�, �������� ������ ������ ���(��: 4�� 3��)���� ����� �ֵ��� ����.
//������ 1, ������ 2, ���� 3: 2
//����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�!
//������ 1, ������ 2, ���� 3: 1
//����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�!
//������ 1, ������ 2, ���� 3: 3
//����� �� ����, ��ǻ�ʹ� �� ����, �����ϴ�!
//������ 1, ������ 2, ���� 3: 3
//����� �� ����, ��ǻ�ʹ� ���� ����, ����� �����ϴ�!
//
//������ ��� : 0��, 3��

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RockPaperScissors(void)
{
    int i;
    int win = 0, lose = 0, draw = 0;
    int user, computer;
    char *choose[3] = {"����", "����", "��"};

    srand(time(NULL));

    while (lose < 1)
    {
        printf("������ 1, ������ 2, ���� 3: ");
        scanf("%d", &user);

        computer = rand() % 3 + 1;

        if (user == 1 && computer == 2)
        {
            printf("����� %s����, ��ǻ�ʹ� %s ����, ����� �̰���ϴ�!\n", choose[user - 1], choose[computer - 1]);
            win++;
        }
        else if (user == 2 && computer == 3)
        {
            printf("����� %s����, ��ǻ�ʹ� %s ����, ����� �̰���ϴ�!\n", choose[user - 1], choose[computer - 1]);
            win++;
        }
        else if (user == 3 && computer == 1)
        {
            printf("����� %s����, ��ǻ�ʹ� %s ����, ����� �̰���ϴ�!\n", choose[user - 1], choose[computer - 1]);
            win++;
        }
        else if (user == computer)
        {
            printf("����� %s����, ��ǻ�ʹ� %s ����, �����ϴ�!\n", choose[user - 1], choose[computer - 1]);
            draw++;
        }
        else if (user == 1 && computer == 3)
        {
            printf("����� %s����, ��ǻ�ʹ� %s ����, ����� �����ϴ�!\n", choose[user - 1], choose[computer - 1]);
            break;
        }
        else if (user == 2 && computer == 1)
        {
            printf("����� %s����, ��ǻ�ʹ� %s ����, ����� �����ϴ�!\n", choose[user - 1], choose[computer - 1]);
            break;
        }
        else if (user == 3 && computer == 2)
        {
            printf("����� %s����, ��ǻ�ʹ� %s ����, ����� �����ϴ�!\n", choose[user - 1], choose[computer = 1]);
            break;
        }
        else
            printf("�߸� �Է��ϼ̽��ϴ�.\n");
    }

    printf("\n");

    printf("%d�� %d��", win, draw);
}

int main(void)
{
    RockPaperScissors();

    return 0;
}