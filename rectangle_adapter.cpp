#include "rectangle_adapter.h"

RectangleAdapter::RectangleAdapter(int x, int y, int w, int h)
{
    this->legacyRectangle = LegacyRectangle(x, y, x + w, y + h);
    cout << "RectangleAdapter(x, y, x + w, y + w)" << " - (" << x << ", " << y << ", " << x + w << ", " << y + h << ")" << endl;
}

void RectangleAdapter::draw()
{
    this->legacyRectangle.oldDraw();
    cout << "RectangleAdapter: draw()" << endl;
}

RectangleAdapter::~RectangleAdapter()
{

}
