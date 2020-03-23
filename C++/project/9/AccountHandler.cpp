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

    cout << "[������������]" << endl;
    cout << "1. ���뿹�ݰ��� 2. �ſ�ŷڰ���" << endl;
    cout << "����: ";
    cin >> choice;

    cout << "����ID: ";
    cin >> num;

    cout << "�� ��: ";
    cin >> name;

    cout << "�Աݾ�: ";
    cin >> balance;

    cout << "������: ";
    cin >> interest_percent;

    if (choice == 1)
    {
        list[list_count++] = new NormalAccount(num, name, balance, interest_percent);
    }
    else if (choice == 2)
    {
        int creditrank;

        cout << "�ſ���(1toA, 2toB, 3toC): ";
        cin >> creditrank;

        list[list_count++] = new HighCreditAccount(num, name, balance, interest_percent, creditrank);
    }
    else
    {
        cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �������ּ���." << endl;
    }

    cout << endl;
}

void AccountHandler::Deposit(void)
{
    int compare_id;
    int money;
    int fail_count = 0;

    cout << "[��    ��]" << endl;
    cout << "����ID: ";
    cin >> compare_id;

    if (!CheckNum(compare_id))
    {
        cout << "ã�����ϴ� ���°� �����ϴ�." << endl
             << endl;
        return;
    }

    cout << "�Աݾ�: ";
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

    cout << "[��    ��]" << endl;
    cout << "����ID: ";
    cin >> compare_id;

    if (!CheckNum(compare_id))
    {
        cout << "ã�����ϴ� ���°� �����ϴ�." << endl
             << endl;
        return;
    }

    cout << "��ݾ�: ";
    cin >> money;

    for (int i = 0; i < list_count; i++)
        if (compare_id == list[i]->GetNum())
            list[i]->Withdraw(money);
}

void AccountHandler::Print(void) const
{
    if (list_count == 0)
        cout << "����� ������ �����ϴ�." << endl;
    else
        for (int i = 0; i < list_count; i++)
            list[i]->Print();
}

void AccountHandler::ShowMenu(void) const
{
    cout << "-----Menu-----" << endl;
    cout << "1. ���°���" << endl;
    cout << "2. �� ��" << endl;
    cout << "3. �� �� " << endl;
    cout << "4. �������� ��ü ���" << endl;
    cout << "5. ���α׷� ����" << endl;
    cout << "����:";
}