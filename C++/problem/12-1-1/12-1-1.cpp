#include <iostream>
#include <cstring>

using namespace std;

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

String::String(char *arr, int arrlen) : len(arrlen) //다른 멤버함수들에서 쓰기 위하여 두 번째 인자를 추가함.
{
    if (arr != NULL) //main 함수에 str4 때문에 추가해야함.
    {
        if (len == 0) //문자열만 들어왔을 때를 위함.
            len = strlen(arr) + 1;
        str = new char[len];
        strcpy(str, arr);
    }
}

String::~String()
{
    if (str != NULL) //답지 보고 추가
        delete[] str;
}

String::String(const String &ref)
{
    len = ref.len;
    str = new char[len];
    strcpy(str, ref.str);
}

String &String::operator=(const String &ref)
{
    delete[] str;
    len = ref.len;
    str = new char[len];
    strcpy(str, ref.str);

    return *this;
}

String String::operator+(const String &ref)
{
    int dest_len = len + ref.len - 1; //답지 보고 내가 메모리 공간을 확보안한게 문제였다.
    String temp(str, dest_len);
    strcat(temp.str, ref.str);

    return temp;
}

String &String::operator+=(const String &ref)
{
    char *temp = new char[len];
    strcpy(temp, str);

    len += ref.len - 1;
    str = new char[len];

    strcpy(str, temp);
    strcat(str, ref.str);

    delete[] temp;

    return *this;
}

bool String::operator==(const String &ref)
{
    if (!strcmp(str, ref.str))
        return 1;
    else
        return 0;
}

ostream &operator<<(ostream &os, const String &ref)
{
    os << ref.str;
    return os;
}

istream &operator>>(istream &is, String &ref) //답지 봄.
{
    //is >> ref.str; 생각없이 코드를 짬.
    char *temp;
    is >> temp;

    String temp_string(temp, strlen(temp));
    ref = temp_string;

    return is;
}

int main(void)
{
    String str1 = "I like ";
    String str2 = "string class";
    String str3 = str1 + str2;

    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    str1 += str2;

    if (str1 == str3)
        cout << "동일한 문자열" << endl;
    else
        cout << "동일하지 않은 문자열!" << endl;

    String str4;

    cout << "문자열 입력 : ";
    cin >> str4;
    cout << "입력한 문자열 : " << str4 << endl;

    return 0;
}