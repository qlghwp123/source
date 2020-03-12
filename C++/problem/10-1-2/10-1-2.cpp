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
    void ShowPosition() const
    {
        cout << '[' << xpos << ", " << ypos << ']' << endl;
    }
    Point &operator+=(const Point &pos)
    {
        this->xpos += pos.xpos;
        this->ypos += pos.ypos;

        return *this;
    }
    Point &operator-=(const Point &pos)
    {
        this->xpos -= pos.xpos;
        this->ypos -= pos.ypos;

        return *this;
    }
};

int main(void)
{
    Point pos1(3, 4);
    Point pos2(10, 20);

    pos1.ShowPosition();
    pos2.ShowPosition();

    cout << endl;

    pos1 += pos2;

    pos1.ShowPosition();
    pos2.ShowPosition();

    cout << endl;

    pos1 -= pos2;

    pos1.ShowPosition();
    pos2.ShowPosition();

    cout << endl;

    return 0;
}