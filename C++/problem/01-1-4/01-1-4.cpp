#include <iostream>

int main(void)
{
    int input = 0;

    while (1)
    {
        std::cout << "�Ǹ� �ݾ��� ���� ������ ���(-1 to end) ";
        std::cin >> input;

        if (input == -1)
        {
            std::cout << "���α׷��� �����մϴ�." << std::endl;
            break;
        }
        std::cout << "�̹� �� �޿� : " << input * 0.12 + 50 << "����" << std::endl;
    }
    return 0;
}