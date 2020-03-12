#ifndef __ACCOUNTHANDLER_H__
#define __ACCOUNTHANDLER_H__

#include "Account.h"
#include "BankingCommonDec1.h"

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

#endif 