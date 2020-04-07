#ifndef __NORMALACCOUNT_H__
#define __NORMALACCOUNT_H__

#include "Account.h"

class NormalAccount : public Account
{
private:
    int interest;

public:
    NormalAccount(int copy_num, char *copy_name, int copy_balance, int copy_interest);
    virtual void Deposit(int money);
};

NormalAccount::NormalAccount(int copy_num, char *copy_name, int copy_balance, int copy_interest) : Account(copy_num, copy_name, copy_balance), interest(copy_interest)
{
}

void NormalAccount::Deposit(int money)
{
    Account::Deposit(money);
    Account::Deposit(money * interest / 100.);
}

#endif