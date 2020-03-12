#include <iostream>
#include <cstring>

using namespace std;

class MyFriendInfo
{
private:
    char *name;
    int age;

public:
    MyFriendInfo(char *myname, int myage) : age(myage)
    {
        name = new char[strlen(myname) + 1];
        strcpy(name, myname);
    }
    ~MyFriendInfo()
    {
        delete[] name;
    }
    void ShowMyFriendInfo() const
    {
        cout << "�̸� : " << name << endl;
        cout << "���� : " << age << endl;
    }
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
    char *addr;
    char *phone;

public:
    MyFriendDetailInfo(char *myname, int myage, char *myaddr, char *myphone) : MyFriendInfo(myname, myage)
    {
        addr = new char[strlen(myaddr) + 1];
        phone = new char[strlen(myphone) + 1];

        strcpy(addr, myaddr);
        strcpy(phone, myphone);
    }
    ~MyFriendDetailInfo()
    {
        delete[] addr;
        delete[] phone;
    }
    void ShowMyFriendDetailInfo() const
    {
        ShowMyFriendInfo();
        cout << "�ּ� : " << addr << endl;
        cout << "��ȭ : " << phone << endl;
    }
};

int main(void)
{
    MyFriendDetailInfo fr1("�̵���", 24, "�뱸������ �޼��� ���ﵿ 203-3���� 2��", "010-3045-6088");
    fr1.ShowMyFriendDetailInfo();

    return 0;
}