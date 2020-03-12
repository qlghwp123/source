#include <iostream>
#include <cstring>

#define MAX 100

using namespace std;

enum
{
    MAKE = 1,
    DEPOSIT,
    WITHDRAW,
    PRINT,
    EXIT
};

class Account
{
private:
    int num;
    char *name;
    int balance;

public:
    Account(int copy_num, char *copy_name, int copy_balance) : num(copy_num), balance(copy_balance)
    {
        int len = strlen(copy_name);
        name = new char[len];
        strcpy(name, copy_name);
    }
    Account(const Account &copy) : num(copy.num), balance(copy.balance)
    {
        int len = strlen(copy.name) + 1;
        name = new char[len];
        strcpy(name, copy.name);
    }
    ~Account()
    {
        delete name;
    }
    void Deposit(int money)
    {
        balance += money;
        cout << "�Ա� �Ϸ�" << endl
             << endl;
    }
    void Withdraw(int money)
    {
        if (money <= balance)
        {
            balance -= money;
            cout << "��� �Ϸ�" << endl
                 << endl;
        }
        else
            cout << "��ݾ��� �ܾ׺��� �����ϴ�." << endl
                 << endl;
    }
    void Print()
    {
        cout << "����ID: " << num << endl;
        cout << "�� ��: " << name << endl;
        cout << "�� ��: " << balance << endl
             << endl;
    }

    int GetNum()
    {
        return num;
    }
};

bool CheckNum(Account **list, int list_count, int compare_id)
{
    for (int i = 0; i < list_count; i++)
        if (list[i]->GetNum() == compare_id)
            return true;

    return false;
}

void MakeAccount(Account **list, int *list_count)
{
    int num;
    char name[MAX];
    int balance;

    cout << "����ID: ";
    cin >> num;

    cout << "�� ��: ";
    cin >> name;

    cout << "�Աݾ�: ";
    cin >> balance;

    cout << endl;
    list[(*list_count)++] = new Account(num, name, balance);
}

void Deposit(Account **list, int list_count)
{
    int compare_id;
    int money;
    int fail_count = 0;

    cout << "[��    ��]" << endl;
    cout << "����ID: ";
    cin >> compare_id;

    if (!CheckNum(list, list_count, compare_id))
    {
        cout << "ã�����ϴ� ���°� �����ϴ�." << endl
             << endl;
        return;
    }

    cout << "�Աݾ�: ";
    cin >> money;

    for (int i = 0; i < list_count; i++)
        if (compare_id == list[i]->GetNum())
            list[i]->Deposit(money);
}

void Withdraw(Account **list, int list_count)
{
    int compare_id;
    int money;
    int fail_count = 0;

    cout << "[��    ��]" << endl;
    cout << "����ID: ";
    cin >> compare_id;

    if (!CheckNum(list, list_count, compare_id))
    {
        cout << "ã�����ϴ� ���°� �����ϴ�." << endl
             << endl;
        return;
    }

    cout << "��ݾ�: ";
    cin >> money;

    for (int i = 0; i < list_count; i++)
        if (compare_id == list[i]->GetNum())
            list[i]->Withdraw(money);
}

void Print(Account **list, int list_count)
{
    for (int i = 0; i < list_count; i++)
        list[i]->Print();
}

void ShowMenu(void)
{
    int input = 0;
    Account *list[MAX];
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
        cout << endl;

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

    for (int i = 0; i < list_count; i++)
        delete list[i];
}

int main(void)
{
    ShowMenu();

    return 0;
}