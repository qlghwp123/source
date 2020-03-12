#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
    char *name;
    int age;
public:
    Person(char *myname, int myage)
    {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }
    void ShowPersonInfo() const
    {
        cout << "�̸� : " << name << endl;
        cout << "���� : " << age << endl;
    }
    ~Person()
    {
        delete []name;
        cout << "called destructor!" << endl;
    }
    /*Solution to avoid memory leak and do deep copy
    Person& operator=(const Person& ref)
    {
        delete []name;
        int len = strlen(ref.name) + 1;
        name = new char[len];
        strcpy(name, ref.name);
        age = ref.age;

        return *this;
    }
    */
};

int main(void)
{
    Person man1("Lee Dong Geun", 25);
    Person man2("Lee Dong Geun", 24);

    man2 = man1;

    man1.ShowPersonInfo();
    man2.ShowPersonInfo();


    return 0;
}