#include <iostream>
#include <cstdlib>

using namespace std;

//답지, 답지가 가장 명확하다.
class BoundCheckIntArray
{
private:
    int *arr;
    int arrlen;
    BoundCheckIntArray(const BoundCheckIntArray &ref)
    {
    }
    BoundCheckIntArray &operator=(const BoundCheckIntArray &ref)
    {
    }

public:
    BoundCheckIntArray(int len) : arrlen(len)
    {
        arr = new int[len];
    }
    int &operator[](int index)
    {
        if (index < 0 || index >= arrlen)
        {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }

        return arr[index];
    }

    ~BoundCheckIntArray()
    {
        delete[] arr;
    }
};

class BoundCheck2DIntArray
{
private:
    BoundCheckIntArray **arr;
    int arrlen;
    BoundCheck2DIntArray(const BoundCheck2DIntArray &ref)
    {
    }
    BoundCheck2DIntArray &operator=(const BoundCheck2DIntArray &ref)
    {
    }

public:
    BoundCheck2DIntArray(int col, int row) : arrlen(col)
    {
        arr = new BoundCheckIntArray *[arrlen];

        for (int i = 0; i < col; i++)
            arr[i] = new BoundCheckIntArray(row);
    }
    BoundCheckIntArray &operator[](int index)
    {
        if (index < 0 || index >= arrlen)
        {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }

        return *(arr[index]);
    }

    ~BoundCheck2DIntArray()
    {
        for (int i = 0; i < arrlen; i++)
            delete arr[i];
        delete arr;
    }
};
/* //내가 한거, 핵심은 같으나 중요한 BoundCheck가 안됨. 답지가 옳음.
class BoundCheck2DIntArray
{
private:
    int **arr;
    int row;
    int col;
    BoundCheck2DIntArray(const BoundCheck2DIntArray &ref)
    {
    }
    BoundCheck2DIntArray &operator=(const BoundCheck2DIntArray &ref)
    {
    }

public:
    BoundCheck2DIntArray(int c, int r) : col(c), row(r)
    {
        arr = new int *[c];

        for (int i = 0; i < c; i++)
            arr[i] = new int[r];
    }
    int *operator[](int index)
    {
        if (index < 0)
        {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }

        return arr[index];
    }
    ~BoundCheck2DIntArray()
    {
        for (int i = 0; i < col; i++)
            delete arr[i];
        delete[] arr;
    }
};
*/
int main(void)
{
    int row = 4;
    int col = 5;

    BoundCheck2DIntArray arr(col, row);

    for (int n = 0; n < col; n++)
        for (int m = 0; m < row; m++)
            arr[n][m] = n + m;

    for (int n = 0; n < col; n++)
    {
        for (int m = 0; m < row; m++)
            cout << arr[n][m];
        cout << endl;
    }
}
