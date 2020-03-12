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
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
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
        cout << "주소 : " << addr << endl;
        cout << "전화 : " << phone << endl;
    }
};

int main(void)
{
    MyFriendDetailInfo fr1("이동근", 24, "대구광역시 달서구 감삼동 203-3번지 2층", "010-3045-6088");
    fr1.ShowMyFriendDetailInfo();

    return 0;
}