/*
���� 2523ó�� �̰͵� � ���� ���� �ƴ� ������ ����� ����
�����س� ��.�ٸ� ������ �κ��� else �κ�.
�� ���������� �� -1, +1�� �κ��� 0~n-1���� �����ؼ� n�� ���ȱ� ������
���� +-1�� �� ���� �ƴұ� �����Ѵ�.
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