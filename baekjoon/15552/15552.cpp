/*
cin, cout 속도 관련해서 좋은 문제였다.
관련 자료는 
https://blog.naver.com/totok682/221395010190
https://blog.naver.com/iay1020/221612943360
https://blog.naver.com/hanblueblue/221677270050
*/
#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}