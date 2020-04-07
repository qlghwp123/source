#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

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
    Account &operator=(const Account &ref);
    virtual void Deposit(int money);
    void Withdraw(int money);
    void Print() const;
    int GetNum() const;
};

#endif