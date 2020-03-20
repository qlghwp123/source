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
    friend ostream &operator<<(ostream &os, const Point &ref);
    friend ostream &operator<<(ostream &os, const Point *ref); //typedef Point *POINT_PTR 문장이 아래에 있기에 컴파일러 입장에서는 몰라서 그런건가?
};

ostream &operator<<(ostream &os, const Point &ref)
{
    os << '[' << ref.xpos << ", " << ref.ypos << ']' << endl;
    return os;
}

ostream &operator<<(ostream &os, const Point *ref) //Point *를 POINT_PTR로 바꾸면 컴파일 오류가 뜸. 아마도 위 주석에 써놓은 것과 같은 문제인듯.
{
    os << '[' << ref->xpos << ", " << ref->ypos << ']' << endl;
    return os;
}

typedef Point *POINT_PTR;

class BoundCheckPointArray
{
private:
    POINT_PTR *arr;
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
        arr = new POINT_PTR[len];
    }
    POINT_PTR &operator[](int index)
    {
        if (index < 0 || index >= arrlen)
        {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }

        return arr[index];
    }
    POINT_PTR &operator[](int index) const
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

    ~BoundCheckPointArray()
    {
        delete[] arr;
    }
};

int main(void)
{
    BoundCheckPointArray arr(3);

    arr[0] = new Point(3, 4);
    arr[1] = new Point(5, 6);
    arr[2] = new Point(7, 8);

    for (int i = 0; i < arr.GetArrlen(); i++)
        cout << arr[i];

    delete arr[0];
    delete arr[1];
    delete arr[2];

    return 0;
}