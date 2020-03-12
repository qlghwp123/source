#include <iostream>
#include <cstring>

using namespace std;

namespace COMP_POS
{
enum
{
    CLERK,
    SENIOR,
    ASSIST,
    MANAGER
};
void ShowPostionInfo(int rank)
{
    switch (rank)
    {
    case CLERK:
        cout << "���";
        break;
    case SENIOR:
        cout << "����";
        break;
    case ASSIST:
        cout << "�븮";
        break;
    case MANAGER:
        cout << "����";
        break;
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
        name = new char[strlen(i_name) + 1];
        company = new char[strlen(i_company) + 1];
        phone = new char[strlen(i_phone) + 1];

        strcpy(name, i_name);
        strcpy(company, i_company);
        strcpy(phone, i_phone);
    }

    NameCard(const NameCard &copy) : rank(copy.rank)
    {
        name = new char[strlen(copy.name) + 1];
        company = new char[strlen(copy.company) + 1];
        phone = new char[strlen(copy.phone) + 1];

        strcpy(name, copy.name);
        strcpy(company, copy.company);
        strcpy(phone, copy.phone);
    }

    void ShowNameCardInfo()
    {
        cout << "�̸�: " << name << endl;
        cout << "ȸ��: " << company << endl;
        cout << "��ȭ��ȣ: " << phone << endl;
        cout << "����: ";
        COMP_POS::ShowPostionInfo(rank);
        cout << endl;
        cout << endl;
    }

    ~NameCard()
    {
        delete[] name;
        delete[] company;
        delete[] phone;
    }
};

int main(void)
{
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard copy1 = manClerk;
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard copy2 = manSENIOR;

    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();

    return 0;
}