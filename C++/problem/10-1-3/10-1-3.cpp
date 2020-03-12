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
    friend bool operator==(const Point &pos1, const Point &pos2);
    friend bool operator!=(const Point &pos1, const Point &pos2);
};

bool operator==(const Point &pos1, const Point &pos2)
{
    if (pos1.xpos == pos2.xpos && pos1.xpos == pos2.ypos)
        return true;
    else
        return false;
}

bool operator!=(const Point &pos1, const Point &pos2)
{
    if (pos1 == pos2)
        return false;
    else
        return true;
}

int main(void)
{
    Point pos1(3, 4);
    Point pos2(10, 20);

    if (pos1 == pos2)
        cout << "same" << endl;
    if (pos1 != pos2)
        cout << "diffrent" << endl;

    return 0;
}