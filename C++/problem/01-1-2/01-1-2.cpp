#include <iostream>

#define MAX 100

int main(void)
{
    char name[MAX];
    char num[MAX];

    std::cout << "�̸��� ��ȭ��ȣ�� �Է��ϼ���.";
    std::cin >> name >> num;

    std::cout << "����� �̸��� " << name << "�̸� ����� ��ȭ��ȣ�� " << num << " �Դϴ�. " << std::endl;

    return 0;
}