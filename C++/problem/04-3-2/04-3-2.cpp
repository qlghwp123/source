#include <iostream>
#include <cstring>

using namespace std;

/*내가 한 것

enum COMP_POS
{
    CLERK,
    SENIOR,
    ASSIST,
    MANAGER
};
*/

//답안
namespace COMP_POS
{
enum
{
    CLERK,
    SENIOR,
    ASSIST,
    MANAGER
};

void ShowPositionInfo(int pos)
{
    switch (pos)
    {
    case CLERK:
        cout << "사원" << endl;
        break;
    case SENIOR:
        cout << "주임" << endl;
        break;
    case ASSIST:
        cout << "대리" << endl;
        break;
    case MANAGER:
        cout << "과장" << endl;
    }
}
} // namespace COMP_POS

class NameCard
{

private:
    char *name;
    char *company;
    char *phone;
    int rank;

public:
    NameCard(char *i_name, char *i_company, char *i_phone, int i_rank) : rank(i_rank)
    {
        /* 내가 한 것
        //문자열 형태로 저장을 하지 않았고, 길이에 딱 맞는 메모리 공간을 확보하지 않았다.
        name = new char;
        company = new char;
        phone = new char;

        name = i_name;
        company = i_company;
        phone = i_phone;
        */

        //답안
        name = new char[strlen(i_name) + 1];
        company = new char[strlen(i_company) + 1];
        phone = new char[strlen(i_phone) + 1];

        strcpy(name, i_name);
        strcpy(company, i_company);
        strcpy(phone, i_phone);
    }

    void ShowNameCardInfo()
    {
        cout << "이름: " << name << endl;
        cout << "회사: " << company << endl;
        cout << "전화번호: " << phone << endl;
        cout << "직급: ";
        COMP_POS::ShowPositionInfo(rank);
        cout << endl;

        /* 내가 한 것
        if (rank == COMP_POS::CLERK)
            cout << "사원" << endl
                 << endl;
        else if (rank == COMP_POS::SENIOR)
            cout << "주임" << endl
                 << endl;
        else if (rank == COMP_POS::ASSIST)
            cout << "대리" << endl
                 << endl;
        else
            cout << "과장" << endl
                 << endl;
        */
    }

    ~NameCard()
    {
        /* 내가 한 것
        delete name;
        delete company;
        delete phone;
        */

        //답안
        delete[] name;
        delete[] company;
        delete[] phone;
    }
};

int main(void)
{
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);

    manClerk.ShowNameCardInfo();
    manSenior.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();

    return 0;
}