#include "legacy_rectangle.h"

LegacyRectangle::LegacyRectangle(int x1, int y1, int x2, int y2)
{
    this->x1_ =  x1;
    this->x2_ =  x2;
    this->y1_ =  y1;
    this->y2_ =  y2;
    cout << "Legacy Rectangle(x1, y1, x2, y2) - (" << x1_ << ", " << y1_ << ", " << x2_ << ", " << y2_ << ")" << endl;
}

void LegacyRectangle::oldDraw()
{
    cout << "Legacy Rectangle: oldDraw()" << endl;
}

LegacyRectangle::~LegacyRectangle()
{

}
