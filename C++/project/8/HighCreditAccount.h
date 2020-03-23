#ifndef __HIGHCREDITACCOUNT_H__
#define __HIGHCREDITACCOUNT_H__

#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount
{
private:
    int credit;

public:
    HighCreditAccount(int copy_num, char *copy_name, int copy_balance, int copy_interest, int copy_credit);
    virtual void Deposit(int money);
};

HighCreditAccount::HighCreditAccount(int copy_num, char *copy_name, int copy_balance, int copy_interest, int copy_credit) : NormalAccount(copy_num, copy_name, copy_balance, copy_interest), credit(copy_credit)
{
    switch (credit)
    {
	case CreditRank::A:
        credit = 7;
        break;
    case CreditRank::B:
        credit = 4;
        break;
    case CreditRank::C:
        credit = 2;
        break;
    }
}

void HighCreditAccount::Deposit(int money)
{
	NormalAccount::Deposit(money);
	Account::Deposit(money * credit / 100.);
}

#endif