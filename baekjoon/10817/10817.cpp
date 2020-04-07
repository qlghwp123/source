/*
삼항 연산자에 괄호를 적용하지 않으면
삼항 연산자 내 조건식의 결과값만 남게되어서
이렇게 문제를 남김.
*/

#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int in[3];

    for (int i = 0; i < 3; i++)
        cin >> in[i];

    if (in[0] < in[1])
        if (in[1] < in[2])
            cout << in[1];
        else
            cout << ((in[0] < in[2]) ? in[2] : in[0]);
    else if (in[0] < in[2])
        cout << in[0];
    else
        cout << ((in[1] < in[2]) ? in[2] : in[1]);

    return 0;
}