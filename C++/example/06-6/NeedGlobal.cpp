#include <iostream>

using namespace std;

int simObject;
int cmxObjCnt;

class SoSimple
{
public:
    SoSimple()
    {
        simObject++;
        cout << simObject << "��° SoSimple ��ü" << endl;
    }
};

class SoComplex
{
public:
    SoComplex()
    {
        cmxObjCnt++;
        cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
    }
    SoComplex(SoComplex &copy)
    {
        cmxObjCnt++;
        cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
    }
};

int main(void)
{
    SoSimple sim1;
    SoSimple sim2;

    SoComplex com1;
    SoComplex com2 = com1;
    SoComplex();

    return 0;
}