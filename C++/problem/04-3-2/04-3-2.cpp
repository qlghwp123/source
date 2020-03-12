#include <iostream>
#include <cstring>

using namespace std;

/*���� �� ��

enum COMP_POS
{
    CLERK,
    SENIOR,
    ASSIST,
    MANAGER
};
*/

//���
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
        cout << "���" << endl;
        break;
    case SENIOR:
        cout << "����" << endl;
        break;
    case ASSIST:
        cout << "�븮" << endl;
        break;
    case MANAGER:
        cout << "����" << endl;
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
        /* ���� �� ��
        //���ڿ� ���·� ������ ���� �ʾҰ�, ���̿� �� �´� �޸� ������ Ȯ������ �ʾҴ�.
        name = new char;
        company = new char;
        phone = new char;

        name = i_name;
        company = i_company;
        phone = i_phone;
        */

        //���
        name = new char[strlen(i_name) + 1];
        company = new char[strlen(i_company) + 1];
        phone = new char[strlen(i_phone) + 1];

        strcpy(name, i_name);
        strcpy(company, i_company);
        strcpy(phone, i_phone);
    }

    void ShowNameCardInfo()
    {
        cout << "�̸�: " << name << endl;
        cout << "ȸ��: " << company << endl;
        cout << "��ȭ��ȣ: " << phone << endl;
        cout << "����: ";
        COMP_POS::ShowPositionInfo(rank);
        cout << endl;

        /* ���� �� ��
        if (rank == COMP_POS::CLERK)
            cout << "���" << endl
                 << endl;
        else if (rank == COMP_POS::SENIOR)
            cout << "����" << endl
                 << endl;
        else if (rank == COMP_POS::ASSIST)
            cout << "�븮" << endl
                 << endl;
        else
            cout << "����" << endl
                 << endl;
        */
    }

    ~NameCard()
    {
        /* ���� �� ��
        delete name;
        delete company;
        delete phone;
        */

        //���
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