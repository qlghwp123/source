/*
����� �� �ű��� ������ �����ͺô�.
n�� Ȧ���� ¦���Ŀ� ���� �� ������ ���� ���� �߻� ������
��¦ �޶����� �ʰ� �˾Ҵ�.
�� ���� �ָԱ��������� ����������̴�.
*/
#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
            if (!(j % 2))
            {
                cout << '*';
                if (j + 1 == n || j + 2 == n)
                    cout << '\n';
            }
            else
                cout << ' ';

        cout << '\n';
    }

    return 0;
}