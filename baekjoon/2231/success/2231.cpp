//������ ����
//���� ��� ������ ����.
//����� 2������ ��������� �� ���� ������ ���� �� �ҽ��̴�.
//�Ʒ� �ҽ��� �ڸ����� ���Ͽ� �ռ� ���� �ҽ����ٴ� ���� �� ������ ��������.
//�ٸ� ù ��° �ҽ��� ���� �ð��� 20ms �� �ɸ���. ���ϴ� �е��� ��� 8ms �̿���.
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

        //copy/=10 �� ���ؼ� �� �ڸ��� ����. ��� ���� %�����ڷ� �ڸ����� ����.
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
        ������ �Ǿ��� �κ��� failure�� �����س��Ҵ�.
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