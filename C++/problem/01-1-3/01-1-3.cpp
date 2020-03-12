#include <iostream>

int main(void)
{
    int input;

    std::cout << "몇 단을 출력할까요?";
    std::cin >> input;

    for (int i = 1; i < 10; i++)
        std::cout << input << " X " << i << " = " << input * i << std::endl;

    return 0;
}