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
        cout << "출금 완료" << endl
             << endl;
    }
    else
        cout << "출금액이 잔액보다 많습니다." << endl
             << endl;
}

void Account::Print() const
{
    cout << "계좌ID: " << num << endl;
    cout << "이 름: " << name << endl;
    cout << "잔 액: " << balance << endl
         << endl;
}

int Account::GetNum() const
{
    return num;
}