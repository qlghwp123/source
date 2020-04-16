#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b, add, sub, mul;
    int sum = 0;
    char temp[2];
    int carry = 0;
    bool diff = false;
    int size;
    int negative;

    cin >> a >> b;

    if ((a[0] == '-' && b[0] != '-') || (a[0] != '-' && b[0] == '-'))
        diff = true;

    if (a[0] < b[0])
        a.swap(b);

    if (diff)
    {
    }
    else
    {
        if (a[0] != '-')
        {
            negative = 0;
            if (a.size() < b.size())
                a.insert(0, "0", b.size() - a.size());
            else if (a.size() > b.size())
                b.insert(0, "0", a.size() - b.size());
        }
        else
        {
            negative = 1;
            if (a.size() < b.size())
                a.insert(1, "0", b.size() - a.size());
            else if (a.size() > b.size())
                b.insert(1, "0", a.size() - b.size());
        }

        size = (a.size() < b.size()) ? a.size() : b.size();

        for (int i = 1; i <= size - negative; i++)
        {
            temp[0] = a[a.size() - i] + b[b.size() - i] + carry - 96;

            if (temp[0] > 9)
            {
                temp[0] += 38;
                carry = 1;
                add.insert(0, temp);

                if (carry && i == (size - negative))
                    add.insert(0, "1");
            }
            else
            {
                temp[0] += 48;
                carry = 0;
                add.insert(0, temp);
            }
        }
        if (negative)
            add.insert(0, "-");
    }
    cout << add << '\n';
    // << sub << '\n'
    //<< mul << '\n';

    return 0;
}