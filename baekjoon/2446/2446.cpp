/*
문제 2523처럼 이것도 어떤 논리적 접근 아닌 예시의 결과를 보고
유츄해낸 것.다만 유추한 부분은 else 부분.
내 생각이지만 각 -1, +1한 부분은 0~n-1까지 수행해서 n번 돌렸기 때문에
각각 +-1을 한 것이 아닐까 추측한다.
*/
#include <iostream>

using namespace std;

int main(void)
{
    int n, t1, t2;

    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i < n)
        {
            t1 = i;
            t2 = n - i;
        }
        else
        {
            t1 = n - (i + 1) % n - 1;
            t2 = (i + 1) % n + 1;
        }
        for (int j = 0; j < t1; j++)
            cout << ' ';
        for (int j = 0; j < 2 * t2 - 1; j++)
            cout << '*';
        cout << endl;
    }
    return 0;
}