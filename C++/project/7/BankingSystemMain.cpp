#include "BankingCommonDec1.h"
#include "AccountHandler.h"

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
            cout << "�����մϴ�." << endl;
            return 0;
        default:
            cout << "�߸��� ���Դϴ�. �ٽ� �Է����ּ���." << endl;
            break;
        }
    }

    return 0;
}