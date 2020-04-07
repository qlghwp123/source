#include <iostream>
#include <cstring>

using namespace std;

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

String::String(char *arr, int arrlen) : len(arrlen) //�ٸ� ����Լ��鿡�� ���� ���Ͽ� �� ��° ���ڸ� �߰���.
{
    if (arr != NULL) //main �Լ��� str4 ������ �߰��ؾ���.
    {
        if (len == 0) //���ڿ��� ������ ���� ����.
            len = strlen(arr) + 1;
        str = new char[len];
        strcpy(str, arr);
    }
}

String::~String()
{
    if (str != NULL) //���� ���� �߰�
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
    int dest_len = len + ref.len - 1; //���� ���� ���� �޸� ������ Ȯ�����Ѱ� ��������.
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

istream &operator>>(istream &is, String &ref) //���� ��.
{
    //is >> ref.str; �������� �ڵ带 «.
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
        cout << "������ ���ڿ�" << endl;
    else
        cout << "�������� ���� ���ڿ�!" << endl;

    String str4;

    cout << "���ڿ� �Է� : ";
    cin >> str4;
    cout << "�Է��� ���ڿ� : " << str4 << endl;

    return 0;
}