/*
분해합은 생성자의 자기 자신과 각 자릿수들의 합이다.
한 자릿수에 대해서 최댓값은 9이다. 자릿수와 분해합 값만 알면 생성화를 수식화 할 수 있다.
즉, 생성자의 범위는 다음과 같다.
N-ci*9 <= x <= N
이 범위를 가지고 프로그램을 짜면 매우 짧은 시간 안에서 해결된다.
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