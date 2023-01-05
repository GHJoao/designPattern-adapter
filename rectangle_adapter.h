#ifndef RECTANGLE_ADAPTER_H_INCLUDED
#define RECTANGLE_ADAPTER_H_INCLUDED

#include "rectangle.h"
#include "legacy_rectangle.h"

class RectangleAdapter : public Rectangle
{
    public:
        RectangleAdapter(int x = 0, int y = 0, int w = 0, int h = 0);
        ~RectangleAdapter();
        void draw();

    private:
        LegacyRectangle legacyRectangle;
};

#endif // RECTANGLE_ADAPTER_H_INCLUDED
