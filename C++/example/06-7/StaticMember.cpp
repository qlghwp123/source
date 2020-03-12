#include <iostream>

using namespace std;

class SoSimple
{
private:
    static int simObject;

public:
    SoSimple()
    {
        simObject++;
        cout << simObject << "¹øÂ° SoSimple °´Ã¼" << endl;
    }
};

int SoSimple::simObject = 0;

class SoComplex
{
private:
    static int cmxObjCnt;

public:
    SoComplex()
    {
        cmxObjCnt++;
        cout << cmxObjCnt << "¹øÂ° SoComplex °´Ã¼" << endl;
    }
    SoComplex(SoComplex &copy)
    {
        cmxObjCnt++;
        cout << cmxObjCnt << "¹øÂ° SoComplex °´Ã¼" << endl;
    }
};

int SoComplex::cmxObjCnt = 0;

int main(void)
{
    SoSimple sim1;
    SoSimple sim2;

    SoComplex cmx1;
    SoComplex cmx2 = cmx1;
    SoComplex();

    return 0;
}