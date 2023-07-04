#include <iostream>

using namespace std;

#ifndef SHAPE_H
#define SHAPE_H



class Shape
{
    private:
        int x;
        int y;

    public:
        Shape();
        Shape(int x, int y);
        string draw();
        void setX(int x);
        void setY(int y);
        int getX();
        int getY();
        virtual ~Shape();

};

#endif // SHAPE_H