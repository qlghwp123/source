#include <iostream>

namespace BestComImpl
{
void SimpleFunc(void)
{
    std::cout << "BestCom�� ������ �Լ� " << std::endl;
}
} // namespace BestComImpl

namespace ProgComImpl
{
void SimpleFunc(void)
{
    std::cout << "ProgCom�� ������ �Լ� " << std::endl;
}
} // namespace ProgComImpl

int main(void)
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}