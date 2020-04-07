/*
�������� �������� �ڱ� �ڽŰ� �� �ڸ������� ���̴�.
�� �ڸ����� ���ؼ� �ִ��� 9�̴�. �ڸ����� ������ ���� �˸� ����ȭ�� ����ȭ �� �� �ִ�.
��, �������� ������ ������ ����.
N-ci*9 <= x <= N
�� ������ ������ ���α׷��� ¥�� �ſ� ª�� �ð� �ȿ��� �ذ�ȴ�.
*/
#include <iostream>

using namespace std;

int main(void)
{
    int cipher = 0;
    int n;
    int copy;
    int sum;

    cin >> n;

    for (int ten = 1; n / ten; ten *= 10)
        cipher++;

    int begin = n - cipher * 9;

    for (int i = begin; i < n; i++)
    {
        copy = sum = i;
        for (int j = 0; j < cipher; j++)
        {
            sum += copy % 10;
            copy /= 10;
        }

        if (sum == n)
        {
            cout << i;
            return 0;
        }
    }

    cout << 0;

    return 0;
}