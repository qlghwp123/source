#include "String.h"

String::String(char *arr, int arrlen) : len(arrlen)
{
    if (arr != NULL)
    {
        if (len == 0)
            len = strlen(arr) + 1;
        str = new char[len];
        strcpy(str, arr);
    }
}

String::~String()
{
    if (str != NULL)
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
    int dest_len = len + ref.len - 1;
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

istream &operator>>(istream &is, String &ref)
{
    char *temp;
    is >> temp;

    String temp_string(temp, strlen(temp));
    ref = temp_string;

    return is;
}
