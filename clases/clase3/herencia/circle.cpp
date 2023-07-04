#include "circle.h"

Circle::Circle()
{
    //ctor
}

Circle::Circle(int cx, int cy, float r):Shape(cx,cy)
{
    this->r=r;
}

Circle::~Circle()
{
    //dtor
}


string Circle::draw() const{
    return "Soy un circulo";
}


float Circle::getR() const{
    return r;
}

void Circle::setR(float r){
    this->r=r;
}

float Circle::getArea() const{
    return 3.1416*r*r;
}

