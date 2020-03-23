#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include "String.h"

class Account
{
private:
    int num;
    String name;
    int balance;

public:
    Account(int copy_num, String copy_name, int copy_balance);
    virtual void Deposit(int money);
    void Withdraw(int money);
    void Print() const;
    int GetNum() const;
};

#endif