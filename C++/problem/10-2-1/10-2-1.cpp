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
    void ShowPosition(void) const
    {
        cout << '[' << xpos << ", " << ypos << ']' << endl;
    }
    Point &operator-(void)
    {
        static Point tmp(-xpos, -ypos);
        return tmp;
    }
};

int main(void)
{
    Point pos1(2, 3);
    Point pos2 = -pos1;

    pos2.ShowPosition();
    pos1.ShowPosition();

    return 0;
}