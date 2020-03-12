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
            cout << "종료합니다." << endl;
            return 0;
        default:
            cout << "잘못된 값입니다. 다시 입력해주세요." << endl;
            break;
        }
    }

    return 0;
}