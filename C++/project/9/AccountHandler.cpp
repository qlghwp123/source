#include "AccountHandler.h"
#include "BankingCommonDec1.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"

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
    String name;
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