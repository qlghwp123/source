#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    char str1[100] = "stay a while";
    char str2[100] = "and listen.";
    int a;

    cout << strlen(str1) << endl;
    strcpy(str1, str2);
    strcat(str1, str2);
    a = strcmp(str1, str2);

    cout << str1 << endl
         << a << endl;

    return 0;
}