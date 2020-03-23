#include "Account.h"
#include "BankingCommonDec1.h"

Account::Account(int copy_num, String copy_name, int copy_balance) : num(copy_num), name(copy_name), balance(copy_balance)
{
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