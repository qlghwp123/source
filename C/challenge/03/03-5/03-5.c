//가위 바위 보 게임을 만들어보자. 사용자로부터 가위 바위 보 중에서 하나를 입력받는다.
//그리고 컴퓨터는 난수 생성을 통해서 가위 바위 보 중에서 하나를 선택하게 한다.
//이 둘을 비교해서 승자와 패자를 가려주는 프로그램을 작성해 보자.
//단 프로그램의 진행은 사용자가 질 때까지 계속되어야 하고, 마지막에 가서는 게임의 결과(예: 4승 3무)까지 출력해 주도록 하자.
//바위는 1, 가위는 2, 보는 3: 2
//당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다!
//바위는 1, 가위는 2, 보는 3: 1
//당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다!
//바위는 1, 가위는 2, 보는 3: 3
//당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다!
//바위는 1, 가위는 2, 보는 3: 3
//당신은 보 선택, 컴퓨터는 가위 선택, 당신이 졌습니다!
//
//게임의 결과 : 0승, 3무

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RockPaperScissors(void)
{
    int i;
    int win = 0, lose = 0, draw = 0;
    int user, computer;
    char *choose[3] = {"바위", "가위", "보"};

    srand(time(NULL));

    while (lose < 1)
    {
        printf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d", &user);

        computer = rand() % 3 + 1;

        if (user == 1 && computer == 2)
        {
            printf("당신은 %s선택, 컴퓨터는 %s 선택, 당신이 이겼습니다!\n", choose[user - 1], choose[computer - 1]);
            win++;
        }
        else if (user == 2 && computer == 3)
        {
            printf("당신은 %s선택, 컴퓨터는 %s 선택, 당신이 이겼습니다!\n", choose[user - 1], choose[computer - 1]);
            win++;
        }
        else if (user == 3 && computer == 1)
        {
            printf("당신은 %s선택, 컴퓨터는 %s 선택, 당신이 이겼습니다!\n", choose[user - 1], choose[computer - 1]);
            win++;
        }
        else if (user == computer)
        {
            printf("당신은 %s선택, 컴퓨터는 %s 선택, 비겼습니다!\n", choose[user - 1], choose[computer - 1]);
            draw++;
        }
        else if (user == 1 && computer == 3)
        {
            printf("당신은 %s선택, 컴퓨터는 %s 선택, 당신이 졌습니다!\n", choose[user - 1], choose[computer - 1]);
            break;
        }
        else if (user == 2 && computer == 1)
        {
            printf("당신은 %s선택, 컴퓨터는 %s 선택, 당신이 졌습니다!\n", choose[user - 1], choose[computer - 1]);
            break;
        }
        else if (user == 3 && computer == 2)
        {
            printf("당신은 %s선택, 컴퓨터는 %s 선택, 당신이 졌습니다!\n", choose[user - 1], choose[computer = 1]);
            break;
        }
        else
            printf("잘못 입력하셨습니다.\n");
    }

    printf("\n");

    printf("%d승 %d무", win, draw);
}

int main(void)
{
    RockPaperScissors();

    return 0;
}