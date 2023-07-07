#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle:public Shape
{
    private:
         float r;
    public:
        Circle();
        Circle(int cx, int cy, float r);
        virtual ~Circle();
        string draw() const;

        float getR() const;
        void setR(float r);
        float getArea() const;


};

#endif // CIRCLE_H