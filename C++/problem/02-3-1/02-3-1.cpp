#include <iostream>

using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point &PntAdder(const Point &p1, const Point &p2)
{
    Point *temp = new Point;
    //Point &ref_temp = *temp;

    temp->xpos = p1.xpos + p2.xpos;
    temp->ypos = p1.ypos + p2.ypos;

    return *temp;
    //return ref_temp;
}

int main(void)
{
    Point *p1 = new Point;
    Point *p2 = new Point;
    //Point &ref1 = *p1;
    //Point &ref2 = *p2;

    p1->xpos = 3;
    p1->ypos = 5;

    p2->xpos = 6;
    p2->ypos = 7;

    //Point result = PntAdder(ref1, ref2);
    Point &result = PntAdder(*p1, *p2);

    cout << result.xpos << endl;
    cout << result.ypos << endl;

    delete p1;
    delete p2;
    delete &result;

    return 0;
}