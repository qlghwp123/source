/*
���� �����ڿ� ��ȣ�� �������� ������
���� ������ �� ���ǽ��� ������� ���ԵǾ
�̷��� ������ ����.
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