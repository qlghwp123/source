//�� ������ ���� �⺻������ �����ϴ� ���̺귯�� ���ص� ������ �� ����.
//C++ ���� ���� ã�ƺ��� cin �� ����, ���๮�� ���� white space �� �Է� ���� ���Ѵٰ� �Ѵ�.
//��ó : https://blog.naver.com/pjh980918/221778827879
//�׷��� ����Ѱ� cin.getline(char* �����, ũ��) �Լ��̴�.
//�� �Լ��� ����ϸ� ����ҿ� ũ�� - 1 ��ŭ ���ڿ��� ��ϵȴ�.
#include <iostream>
#include <string>

#define MAX 101

using namespace std;

int main(void)
{
    char arr[MAX];

    for (int i = 0; i < MAX; i++)
    {
        cin.getline(arr, MAX);
        cout << arr << endl;
    }

    return 0;
}