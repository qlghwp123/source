/*
해당 규칙을 보고 사례들을 관찰하여 풀었다.
0과 1은 약간 예외적인 케이스니 if문으로 값을 고정시켰고
2 이후에는 전과 전전의 각 0,1 을 합한 값이 된다.
또한 값이 증가할 때, n-1, n-2를 변경시키는게 좀 걸림돌이였는데
생각해보면 값이 증가가 되면 n-2가 곧 n-1가 된다는 것을 깨달아서
그대로 적용시켰다.
현재 시간복잡도는 O(n^2) 인데 
문제에서 값의 범위를 이용하여 복잡도를 줄인 좋은 소스가 있어 출처를 남긴다.
https://www.acmicpc.net/source/18825176
*/
#include <iostream>

using namespace std;

typedef struct
{
    int zero;
    int one;
} fibo;

int main(void)
{
    int t;
    int n;
    int one, zero;
    fibo f1, f2;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        one = zero = 0;
        f1.one = 1;
        f1.zero = 0;
        f2.one = 0;
        f2.zero = 1;

        cin >> n;

        for (int j = 0; j <= n; j++)
        {
            if (j == 0)
            {
                zero = 1;
                one = 0;
            }
            else if (j == 1)
            {
                zero = 0;
                one = 1;
            }
            else
            {
                zero = f1.zero + f2.zero;
                one = f1.one + f2.one;

                f2.zero = f1.zero;
                f2.one = f1.one;
                f1.zero = zero;
                f1.one = one;
            }
        }

        cout << zero << " " << one << endl;
    }

    return 0;
}