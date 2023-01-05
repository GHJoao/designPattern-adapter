#include <iostream>
#include "rectangle_adapter.h"

using namespace std;

int main()
{
    int x = 20, y = 50, w = 300, h = 200;
    cout << "x = " << x << ", y = " << y << ", w = " << w << ", h = " << h << endl;
    Rectangle *r = new RectangleAdapter(x, y, w, h);

    r->draw();

    return 0;
}
