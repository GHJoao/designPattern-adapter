#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include <iostream>
using namespace std;

class Rectangle
{
    public:
        Rectangle();
        ~Rectangle();
        virtual void draw() = 0;
};

#endif // RECTANGLE_H_INCLUDED
