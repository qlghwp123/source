#include <iostream>

using namespace std;

int main(void)
{
    int in[100];
    int n;
    int min;
    int r;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> in[i];

    min = in[0];

    for (int i = 1; i < n; i++)
        if (min > in[i])
            min = in[i];

    for (int i = 0; i < min; i++)
    {
        }
    return 0;
}