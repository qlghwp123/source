#include "BankingCommonDec1.h"

class String
{
private:
    char *str;
    int len; //���� ���� �߰�
public:
    String(char *arr = NULL, int arrlen = 0);
    ~String();
    String(const String &ref);
    String &operator=(const String &ref);
    String operator+(const String &ref); //String? or String &? -> ���� ���� String�� ����. ���� �Ѱ� �´�.
    String &operator+=(const String &ref);
    bool operator==(const String &ref);
    friend ostream &operator<<(ostream &os, const String &ref);
    friend istream &operator>>(istream &is, String &ref);
};