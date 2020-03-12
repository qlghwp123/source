#include <iostream>

#define MAX 100

int main(void)
{
    char name[MAX];
    char num[MAX];

    std::cout << "이름과 전화번호를 입력하세요.";
    std::cin >> name >> num;

    std::cout << "당신의 이름은 " << name << "이며 당신의 전화번호는 " << num << " 입니다. " << std::endl;

    return 0;
}