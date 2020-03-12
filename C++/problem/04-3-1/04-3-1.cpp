#include <iostream>

using namespace std;

class Point
{
private:
    int xpos;
    int ypos;

public:
    Point(int x, int y) : xpos(x), ypos(y)
    {
    }
    int GetX()
    {
        return xpos;
    }
    int GetY()
    {
        return ypos;
    }
    void SetX(int x)
    {
        xpos = x;
    }
    void SetY(int y)
    {
        ypos = y;
    }
    void ShowPointInfo()
    {
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
};

class Circle
{
private:
    Point center;
    int radius;

public:
    Circle(int x, int y, int rad) : center(x, y), radius(rad)
    {
    }
    /*
    void Init(int x, int y, int rad)
    {
        center.Init(x,y);
        radius = rad;
    }
    */
    void ShowCircleInfo()
    {
        cout << "center : "
             << "[" << center.GetX() << ", " << center.GetY() << "]" << endl;
        //center.ShowPointInfo()
        cout << "radius : " << radius << endl;
    }
};

class Ring
{
private:
    Circle in;
    Circle out;

public:
    Ring(int x1, int y1, int rad1, int x2, int y2, int rad2) : in(x1, y1, rad1), out(x2, y2, rad2)
    {
    }
    void ShowRingInfo()
    {
        in.ShowCircleInfo();
        out.ShowCircleInfo();
    }
};

int main(void)
{
    Ring ring(1, 1, 4, 2, 2, 9);

    ring.ShowRingInfo();

    return 0;
}