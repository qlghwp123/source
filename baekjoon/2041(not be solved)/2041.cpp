#include <iostream>

#define MAX 1000

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;

    int mat[MAX][MAX];
    int Maxdiff = (n - 1) * m + (m - 1) * n;
    int diff[Maxdiff] = {0};
    int inc = 1;

    mat[0][0] = 1;
    fill_n(&mat[0][1], MAX * MAX, 0);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m - 1; j++)
        {
            mat[i][j + 1] = mat[i][j] + inc;
            diff[inc++ - 1]++;
        }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < m; j++)
        {
            mat[i + 1][j] = mat[i][j] + inc;
            diff[inc++ - 1]++;
        }

    for (int i = 0; i < Maxdiff; i++)
        cout << diff[i];

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}