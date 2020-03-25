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
        else if (sum > n) //���Ⱑ �����̿���.
        {                 //i ���� �����Ѵٰ� �ؼ� sum ���� �������� ��� �����ϴ°� �ƴϿ���.
            cout << 0;    //���� ��� 1000�� 999�� �ְڴ�.
            break;
        }
    }

    return 0;
}