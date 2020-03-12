#include <iostream>

#define MAX 100

enum
{
    MAKE = 1,
    DEPOSIT,
    WITHDRAW,
    PRINT,
    EXIT
};

using namespace std;

typedef struct account
{
    int num;
    char name[MAX];
    int balance;
} Account;

void MakeAccount(Account *list, int *list_count)
{
    Account temp;

    cout << "����ID:";
    cin >> temp.num;

    cout << "�� ��:";
    cin >> temp.name;

    cout << "�Աݾ�";
    cin >> temp.balance;

    list[(*list_count)++] = temp;
}

void Deposit(Account *list, int list_count)
{
    int compare_id;
    int money;
    int fail_count = 0;

    cout << "[��    ��]" << endl;
    cout << "����ID:";
    cin >> compare_id;

    for (int i = 0; i < list_count; i++)
        if (list[i].num == compare_id)
        {
            cout << "�Աݾ�:";
            cin >> money;

            list[i].balance += money;

            cout << "�ԱݿϷ�" << endl;
        }
        else
            fail_count++;

    if (fail_count == list_count)
        cout << "�ԱݺҰ�" << endl;
}

void Withdraw(Account *list, int list_count)
{
    int compare_id;
    int money;
    int fail_count = 0;

    cout << "[��    ��]" << endl;
    cout << "����ID:";
    cin >> compare_id;

    for (int i = 0; i < list_count; i++)
        if (list[i].num == compare_id)
        {
            cout << "��ݾ�:";
            cin >> money;

            if (money > list[i].balance)
            {
                cout << "��ݺҰ�" << endl;
                break;
            }
            else
                list[i].balance -= money;

            cout << "��ݿϷ�" << endl;
        }
        else
            fail_count++;

    if (fail_count == list_count)
        cout << "��ݺҰ�" << endl;
}

void Print(Account *list, int list_count)
{
    for (int i = 0; i < list_count; i++)
    {
        cout << "����ID: " << list[i].num << endl;
        cout << "�� ��: " << list[i].name << endl;
        cout << "�� ��: " << list[i].balance << endl;
    }
}

void ShowMenu(void)
{
    int input = 0;
    Account list[MAX];
    int list_count = 0;

    while (input != 5)
    {
        cout << "-----Menu-----" << endl;
        cout << "1. ���°���" << endl;
        cout << "2. �� ��" << endl;
        cout << "3. �� �� " << endl;
        cout << "4. �������� ��ü ���" << endl;
        cout << "5. ���α׷� ����" << endl;
        cout << "����:";
        cin >> input;

        switch (input)
        {
        case MAKE:
            MakeAccount(list, &list_count);
            break;
        case DEPOSIT:
            Deposit(list, list_count);
            break;
        case WITHDRAW:
            Withdraw(list, list_count);
            break;
        case PRINT:
            Print(list, list_count);
            break;
        case EXIT:
            break;
        default:
            cout << "�߸��� ���Դϴ�. �ٽ� �Է����ּ���. " << endl;
            break;
        }
    }
}

int main(void)
{
    ShowMenu();

    return 0;
}