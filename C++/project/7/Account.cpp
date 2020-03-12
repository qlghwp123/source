#include "Account.h"
#include "BankingCommonDec1.h"

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