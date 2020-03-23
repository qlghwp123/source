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