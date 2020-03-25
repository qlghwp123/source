//분해합 문제
//정말 고생 많이한 문제.
//방법은 2가지를 고안했으나 더 나은 방향이 여기 이 소스이다.
//아래 소스는 자릿수를 구하여 앞서 말한 소스보다는 조금 더 연산이 가해진다.
//다만 첫 번째 소스도 실행 시간은 20ms 이 걸린다. 잘하는 분들은 평균 8ms 이였다.
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int sum;
    int copy;
    int result = 0;

    cin >> n;

    for (int i = 1; i < n; i++)
    {
        sum = i;
        copy = i;

        //copy/=10 을 통해서 한 자리씩 깎음. 깎기 전에 %연산자로 자릿수를 더함.
        for (int j = 1; i / j; j *= 10)
        {
            sum += copy % 10;
            copy /= 10;
        }

        cout << "i : " << i << ", "
             << "sum : " << sum << endl;

        if (sum == n)
        {
            result = i;
            break;
        }
        /*
        문제가 되었던 부분은 failure에 서술해놓았다.
        */
    }

    cout << result;

    return 0;
}

/*
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int sum;
    int copy;
    int cipher;
    int PoT;
    int temp;
    int result = 0;

    cin >> n;

    for (int i = 1; i < n; i++)
    {
        sum = i;
        copy = i;
        cipher = 0;

        for (PoT = 1; i / PoT; PoT *= 10)
            cipher++;

        for (int j = 0; j < cipher; j++)
        {
            PoT /= 10;
            temp = copy / PoT;
            sum += temp;
            copy -= temp * PoT;
        }

        cout << "i : " << i << ", "
             << "cipher : " << cipher << ", "
             << "sum : " << sum << endl;

        if (sum == n)
        {
            result = i;
            break;
        }
    }

    cout << result;

    return 0;
}
*/