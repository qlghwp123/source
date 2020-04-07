#include "BankingCommonDec1.h"

class String
{
private:
    char *str;
    int len; //답지 보고 추가
public:
    String(char *arr = NULL, int arrlen = 0);
    ~String();
    String(const String &ref);
    String &operator=(const String &ref);
    String operator+(const String &ref); //String? or String &? -> 답지 보니 String이 맞음. 내가 한게 맞다.
    String &operator+=(const String &ref);
    bool operator==(const String &ref);
    friend ostream &operator<<(ostream &os, const String &ref);
    friend istream &operator>>(istream &is, String &ref);
};