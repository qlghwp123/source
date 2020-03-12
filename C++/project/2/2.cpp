#include <iostream>

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
    Account()
    {
        name = new char[MAX];
    }
    ~Account()
    {
        delete name;
    }
    void MakeAccount()
    {
        cout << "계좌ID: ";
        cin >> this->num;

        cout << "이 름: ";
        cin >> this->name;

        cout << "입금액: ";
        cin >> this->balance;

        cout << endl;
    }
    void Deposit(int money)
    {
        balance += money;
        cout << "입금 완료" << endl
             << endl;
    }
    void Withdraw(int money)
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
    void Print()
    {
        cout << "계좌ID: " << num << endl;
        cout << "이 름: " << name << endl;
        cout << "잔 액: " << balance << endl
             << endl;
    }

    int GetNum()
    {
        return num;
    }
};

bool CheckNum(Account **list, int list_count, int compare_id)
{
    for (int i = 0; i < list_count; i++)
        if (list[i]->GetNum() == compare_id)
            return true;

    return false;
}

void Deposit(Account **list, int list_count)
{
    int compare_id;
    int money;
    int fail_count = 0;

    cout << "[입    금]" << endl;
    cout << "계좌ID: ";
    cin >> compare_id;

    if (!CheckNum(list, list_count, compare_id))
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

void Withdraw(Account **list, int list_count)
{
    int compare_id;
    int money;
    int fail_count = 0;

    cout << "[출    금]" << endl;
    cout << "계좌ID: ";
    cin >> compare_id;

    if (!CheckNum(list, list_count, compare_id))
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

void Print(Account **list, int list_count)
{
    for (int i = 0; i < list_count; i++)
        list[i]->Print();
}

void ShowMenu(void)
{
    int input = 0;
    Account *list[MAX];
    int list_count = 0;

    while (input != 5)
    {
        cout << "-----Menu-----" << endl;
        cout << "1. 계좌개설" << endl;
        cout << "2. 입 금" << endl;
        cout << "3. 출 금 " << endl;
        cout << "4. 계좌정보 전체 출력" << endl;
        cout << "5. 프로그램 종료" << endl;
        cout << "선택:";
        cin >> input;
        cout << endl;

        switch (input)
        {
        case MAKE:
            list[list_count] = new Account;
            list[list_count++]->MakeAccount();
            break;
        case DEPOSIT:
            Deposit(list, list_count);
            break;
        case WITHDRAW:
            Withdraw(list, list_count);
            break;
        case PRINT:
            Print(list, list_count);
            break;
        case EXIT:
            break;
        default:
            cout << "잘못된 값입니다. 다시 입력해주세요. " << endl;
            break;
        }
    }

    for (int i = 0; i < list_count; i++)
        delete list[i];
}

int main(void)
{
    ShowMenu();

    return 0;
}