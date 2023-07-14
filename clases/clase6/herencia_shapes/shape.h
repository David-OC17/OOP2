#include <iostream>
#include <string>

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
        virtual ~Shape();

        virtual string draw(); //Add virtual to make it polymorphic
        virtual float getArea();

        void setX(int x);
        void setY(int y);

        int getX();
        int getY();
};

#endif // SHAPE_H