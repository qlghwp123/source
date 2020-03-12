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
    Account(int copy_num, char *copy_name, int copy_balance);
    Account(const Account &copy);
    ~Account();
    void Deposit(int money);
    void Withdraw(int money);
    void Print() const;
    int GetNum() const;
};

Account::Account(int copy_num, char *copy_name, int copy_balance) : num(copy_num), balance(copy_balance)
{
    int len = strlen(copy_name) + 1;
    name = new char[len];
    strcpy(name, copy_name);
}

Account::Account(const Account &copy) : num(copy.num), balance(copy.balance)
{
    int len = strlen(copy.name) + 1;
    name = new char[len];
    strcpy(name, copy.name);
}

Account::~Account()
{
    delete name;
}

void Account::Deposit(int money)
{
    balance += money;
    cout << "�Ա� �Ϸ�" << endl
         << endl;
}

void Account::Withdraw(int money)
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

void Account::Print() const
{
    cout << "����ID: " << num << endl;
    cout << "�� ��: " << name << endl;
    cout << "�� ��: " << balance << endl
         << endl;
}

int Account::GetNum() const
{
    return num;
}

class AccountHandler
{
private:
    Account *list[MAX];
    int list_count;

public:
    AccountHandler();
    ~AccountHandler();
    bool CheckNum(int compare_id) const;
    void MakeAccount();
    void Deposit();
    void Withdraw();
    void Print() const;
    void ShowMenu() const;
};

AccountHandler::AccountHandler() : list_count(0)
{
}

AccountHandler::~AccountHandler()
{
    for (int i = 0; i < list_count; i++)
    {
        delete list[i];
    }
}

bool AccountHandler::CheckNum(int compare_id) const
{
    for (int i = 0; i < list_count; i++)
        if (list[i]->GetNum() == compare_id)
            return true;

    return false;
}

void AccountHandler::MakeAccount(void)
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
    list[list_count++] = new Account(num, name, balance);
}

void AccountHandler::Deposit(void)
{
    int compare_id;
    int money;
    int fail_count = 0;

    cout << "[��    ��]" << endl;
    cout << "����ID: ";
    cin >> compare_id;

    if (!CheckNum(compare_id))
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

void AccountHandler::Withdraw(void)
{
    int compare_id;
    int money;
    int fail_count = 0;

    cout << "[��    ��]" << endl;
    cout << "����ID: ";
    cin >> compare_id;

    if (!CheckNum(compare_id))
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

void AccountHandler::Print(void) const
{
    if (list_count == 0)
        cout << "����� ������ �����ϴ�." << endl;
    else
        for (int i = 0; i < list_count; i++)
            list[i]->Print();
}

void AccountHandler::ShowMenu(void) const
{
    cout << "-----Menu-----" << endl;
    cout << "1. ���°���" << endl;
    cout << "2. �� ��" << endl;
    cout << "3. �� �� " << endl;
    cout << "4. �������� ��ü ���" << endl;
    cout << "5. ���α׷� ����" << endl;
    cout << "����:";
}

int main(void)
{
    AccountHandler ah;

    while (1)
    {
        ah.ShowMenu();
        int input;
        cin >> input;
        cout << endl;

        switch (input)
        {
        case MAKE:
            ah.MakeAccount();
            break;
        case DEPOSIT:
            ah.Deposit();
            break;
        case WITHDRAW:
            ah.Withdraw();
            break;
        case PRINT:
            ah.Print();
            break;
        case EXIT:
            cout << "�����մϴ�." << endl;
            return 0;
        default:
            cout << "�߸��� ���Դϴ�. �ٽ� �Է����ּ���." << endl;
            break;
        }
    }

    return 0;
}