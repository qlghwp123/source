/*
�ش� ��Ģ�� ���� ��ʵ��� �����Ͽ� Ǯ����.
0�� 1�� �ణ �������� ���̽��� if������ ���� �������װ�
2 ���Ŀ��� ���� ������ �� 0,1 �� ���� ���� �ȴ�.
���� ���� ������ ��, n-1, n-2�� �����Ű�°� �� �ɸ����̿��µ�
�����غ��� ���� ������ �Ǹ� n-2�� �� n-1�� �ȴٴ� ���� ���޾Ƽ�
�״�� ������״�.
���� �ð����⵵�� O(n^2) �ε� 
�������� ���� ������ �̿��Ͽ� ���⵵�� ���� ���� �ҽ��� �־� ��ó�� �����.
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