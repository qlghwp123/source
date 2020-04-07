/*
별찍기 중 신기한 문제라서 가져와봤다.
n이 홀수냐 짝수냐에 따라서 한 묶음에 대한 개행 발생 조건이
살짝 달라짐을 늦게 알았다.
이 역시 주먹구구식으로 끼워맞춘식이다.
*/
#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
            if (!(j % 2))
            {
                cout << '*';
                if (j + 1 == n || j + 2 == n)
                    cout << '\n';
            }
            else
                cout << ' ';

        cout << '\n';
    }

    return 0;
}