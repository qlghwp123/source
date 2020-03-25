#include <iostream>

#define MAX 1000000

using namespace std;

int main(void)
{
    int n;
    int sum;
    int copy;
    int cipher;
    int PoT;
    int temp;

    cin >> n;

    for (int i = 1; i < MAX; i++)
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
        /*
        cout << "i : " << i << ", "
             << "cipher : " << cipher << ", "
             << "sum : " << sum << endl;
*/
        if (sum == n)
        {
            cout << i;
            break;
        }
        else if (sum > n) //여기가 원인이였다.
        {                 //i 값이 증가한다고 해서 sum 값도 이전보다 계속 증가하는게 아니였다.
            cout << 0;    //예를 들면 1000과 999가 있겠다.
            break;
        }
    }

    return 0;
}