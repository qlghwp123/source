#include <iostream>

int main(void)
{
    int input = 0;

    while (1)
    {
        std::cout << "판매 금액을 만원 단위로 출력(-1 to end) ";
        std::cin >> input;

        if (input == -1)
        {
            std::cout << "프로그램을 종료합니다." << std::endl;
            break;
        }
        std::cout << "이번 달 급여 : " << input * 0.12 + 50 << "만원" << std::endl;
    }
    return 0;
}