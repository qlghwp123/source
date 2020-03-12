#include <iostream>

using namespace std;

void PlusOne(int &ref)
{
    ref++;
}

void Reverse(int &ref)
{
    ref = -ref;
}

int main(void)
{
    int input;

    cout << "정수를 입력하세요 : ";
    cin >> input;

    PlusOne(input);
    cout << input << endl;

    Reverse(input);
    cout << input << endl;

    return 0;
}