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
    virtual void Deposit(int money);
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

namespace CreditRank
{
enum CreditRank
{
    A = 1,
    B,
    C
};
}

class HighCreditAccount : public NormalAccount
{
private:
    int interest;
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
    Account::Deposit(money);
    Account::Deposit(money * (interest + credit) / 100.);
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
    int choice;
    int num;
    char name[MAX];
    int balance;
    int interest_percent;

    cout << "[계좌종류선택]" << endl;
    cout << "1. 보통예금계좌 2. 신용신뢰계좌" << endl;
    cout << "선택: ";
    cin >> choice;

    cout << "계좌ID: ";
    cin >> num;

    cout << "이 름: ";
    cin >> name;

    cout << "입금액: ";
    cin >> balance;

    cout << "이자율: ";
    cin >> interest_percent;

    if (choice == 1)
    {
        list[list_count++] = new NormalAccount(num, name, balance, interest_percent);
    }
    else if (choice == 2)
    {
        int creditrank;

        cout << "신용등급(1toA, 2toB, 3toC): ";
        cin >> creditrank;

        list[list_count++] = new HighCreditAccount(num, name, balance, interest_percent, creditrank);
    }
    else
    {
        cout << "잘못 입력하셨습니다. 다시 선택해주세요." << endl;
    }

    cout << endl;
}

void AccountHandler::Deposit(void)
{
    int compare_id;
    int money;
    int fail_count = 0;

    cout << "[입    금]" << endl;
    cout << "계좌ID: ";
    cin >> compare_id;

    if (!CheckNum(compare_id))
    {
        cout << "찾고자하는 계좌가 없습니다." << endl
             << endl;
        return;
    }

    cout << "입금액: ";
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

    cout << "[출    금]" << endl;
    cout << "계좌ID: ";
    cin >> compare_id;

    if (!CheckNum(compare_id))
    {
        cout << "찾고자하는 계좌가 없습니다." << endl
             << endl;
        return;
    }

    cout << "출금액: ";
    cin >> money;

    for (int i = 0; i < list_count; i++)
        if (compare_id == list[i]->GetNum())
            list[i]->Withdraw(money);
}

void AccountHandler::Print(void) const
{
    if (list_count == 0)
        cout << "출력할 내용이 없습니다." << endl;
    else
        for (int i = 0; i < list_count; i++)
            list[i]->Print();
}

void AccountHandler::ShowMenu(void) const
{
    cout << "-----Menu-----" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입 금" << endl;
    cout << "3. 출 금 " << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
    cout << "선택:";
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
            cout << "종료합니다." << endl;
            return 0;
        default:
            cout << "잘못된 값입니다. 다시 입력해주세요." << endl;
            break;
        }
    }

    return 0;
}