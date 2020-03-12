#include <iostream>

#define MAX 100

enum
{
    MAKE = 1,
    DEPOSIT,
    WITHDRAW,
    PRINT,
    EXIT
};

using namespace std;

typedef struct account
{
    int num;
    char name[MAX];
    int balance;
} Account;

void MakeAccount(Account *list, int *list_count)
{
    Account temp;

    cout << "계좌ID:";
    cin >> temp.num;

    cout << "이 름:";
    cin >> temp.name;

    cout << "입금액";
    cin >> temp.balance;

    list[(*list_count)++] = temp;
}

void Deposit(Account *list, int list_count)
{
    int compare_id;
    int money;
    int fail_count = 0;

    cout << "[입    금]" << endl;
    cout << "계좌ID:";
    cin >> compare_id;

    for (int i = 0; i < list_count; i++)
        if (list[i].num == compare_id)
        {
            cout << "입금액:";
            cin >> money;

            list[i].balance += money;

            cout << "입금완료" << endl;
        }
        else
            fail_count++;

    if (fail_count == list_count)
        cout << "입금불가" << endl;
}

void Withdraw(Account *list, int list_count)
{
    int compare_id;
    int money;
    int fail_count = 0;

    cout << "[출    금]" << endl;
    cout << "계좌ID:";
    cin >> compare_id;

    for (int i = 0; i < list_count; i++)
        if (list[i].num == compare_id)
        {
            cout << "출금액:";
            cin >> money;

            if (money > list[i].balance)
            {
                cout << "출금불가" << endl;
                break;
            }
            else
                list[i].balance -= money;

            cout << "출금완료" << endl;
        }
        else
            fail_count++;

    if (fail_count == list_count)
        cout << "출금불가" << endl;
}

void Print(Account *list, int list_count)
{
    for (int i = 0; i < list_count; i++)
    {
        cout << "계좌ID: " << list[i].num << endl;
        cout << "이 름: " << list[i].name << endl;
        cout << "잔 액: " << list[i].balance << endl;
    }
}

void ShowMenu(void)
{
    int input = 0;
    Account list[MAX];
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

        switch (input)
        {
        case MAKE:
            MakeAccount(list, &list_count);
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
}

int main(void)
{
    ShowMenu();

    return 0;
}