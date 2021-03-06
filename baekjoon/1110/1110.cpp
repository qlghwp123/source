/*
규칙을 파악한 후 잘 정리한 다음 코드로 서술하였다.
*/
#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, count = 0;

    cin >> n;
    m = n;
    while (1)
    {
        if (m < 10)
            m = m * 10 + m;
        else
            m = (m % 10 * 10) + ((m / 10 + m % 10) % 10);
        count++;
        if (n == m)
            break;
    }

    cout << count << '\n';

    return 0;
}