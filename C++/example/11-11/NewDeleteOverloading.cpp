#include <iostream>

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

    static void *operator new(size_t size)
    {
        cout << "operator new : " << size << endl;
        void *adr = new char[size];
        return adr;
    }
    static void operator delete(void *adr)
    {
        cout << "operator delete()" << endl;
        delete[] adr;
    }
};

ostream &operator<<(ostream &os, const Point &ref)
{
    os << '[' << ref.xpos << ", " << ref.ypos << ']' << endl;
    return os;
}

int main(void)
{
    Point *ptr = new Point(3, 4);

    cout << *ptr;
    delete ptr;

    return 0;
}