#include <iostream>

int main(void)
{
    int result = 0;
    int input;

    for (int i = 0; i < 5; i++)
    {
        std::cout << i + 1 << "��° ���� �Է� : ";
        std::cin >> input;

        result += input;
    }

    std::cout << "�հ� : " << result << std::endl;

    return 0;
}