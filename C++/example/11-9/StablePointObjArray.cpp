#include <iostream>
#include <cstdlib>

using namespace std;

class Point
{
private:
    int xpos;
    int ypos;

public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y)
    {
    }
    friend ostream &operator<<(ostream &os, const Point &pos);
};

ostream &operator<<(ostream &os, const Point &pos)
{
    os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
    return os;
}

class BoundCheckPointArray
{
private:
    Point *arr;
    int arrlen;
    BoundCheckPointArray(const BoundCheckPointArray &ref)
    {
    }
    BoundCheckPointArray &operator=(const BoundCheckPointArray &ref)
    {
    }

public:
    BoundCheckPointArray(int len) : arrlen(len)
    {
        arr = new Point[len];
    }

    Point &operator[](int index)
    {
        if (index < 0 || index >= arrlen)
        {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }

        return arr[index];
    }

    Point operator[](int index) const
    {
        if (index < 0 || index >= arrlen)
        {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }

        return arr[index];
    }

    ~BoundCheckPointArray()
    {
        delete[] arr;
    }

    int GetArrlen() const
    {
        return arrlen;
    }
};

int main(void)
{
    BoundCheckPointArray arr(3);

    arr[0] = Point(3, 4);
    arr[1] = Point(5, 6);
    arr[2] = Point(7, 8);

    for (int i = 0; i < arr.GetArrlen(); i++)
        cout << arr[i];

    return 0;
}