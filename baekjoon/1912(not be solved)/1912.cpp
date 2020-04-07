/*
어떤 한 집합에 대한 부분집합에 관한 문제 같다.
예를 들어 수열의 개수가 5개고 -1 -2 -3 -4 -5 처럼 나왔다면
{-1}, {-2}, {-3}, {-4}, {-5},
{-1, -2}, {-2, -3}, {-3,-4}, {-4, -5},
{-1, -2, -3}, {-2, -3, -4}, {-3, -4, -5},
{-1, -2, -3, -4}, {-2, -3, -4, -5},
{-1, -2, -3, -4, -5}
중 집합 요소들의 총합이 최댓값인 집합을 찾는 의미이니 말이다.
------------------------------------------------------------
ex) n = 5
          
0 : 1 2 3 4 5   5
1 : 12 23 34 45 4
2 : 123 234 345 3
3 : 1234 2345   2
4 : 12345       1
-------------------------------------------------------------
이 방법은 브루트 포스를 이용한 방법인 것 같다. 아무래도
알고리즘 분류로 DP로 되어있는 것을 보니 점화식을 사용한 것 같다.
왜 이렇게 말하냐면 시간 초과가 되기 때문...
-------------------------------------------------------------
*/
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int max;
    int sum;

    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    max = arr[0];

    for (int i = 1; i < n; i++)
        for (int j = 0; j < n - i; j++)
        {
            sum = 0;
            for (int k = j; k < i + j; k++)
                sum += arr[k];
            if (max < sum)
                max = sum;
        }
    cout << max << endl;

    delete[] arr;

    return 0;
}