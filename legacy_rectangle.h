#ifndef LEGACY_RECTANGLE_H_INCLUDED
#define LEGACY_RECTANGLE_H_INCLUDED

#include <iostream>
#include <string.h>
using namespace std;

class LegacyRectangle
{
    public:
        LegacyRectangle(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);
        ~LegacyRectangle();
        void oldDraw();

    private:
        int x1_;
        int x2_;
        int y1_;
        int y2_;
};

#endif // LEGACY_RECTANGLE_H_INCLUDED
