#include <iostream>
#include <cstdlib>

using namespace std;

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

    int GetArrlen() const
    {
        return arrlen;
    }

    ~BoundCheckIntArray()
    {
        delete[] arr;
    }
};

void ShowAllData(const BoundCheckIntArray &ref)
{
    int len = ref.GetArrlen();

    for (int i = 0; i < len; i++)
        cout << ref[i] << endl;
}

int main(void)
{
    BoundCheckIntArray arr(5);

    for (int i = 0; i < 5; i++)
        arr[i] = 11 * (i + 1);

    ShowAllData(arr);

    return 0;
}