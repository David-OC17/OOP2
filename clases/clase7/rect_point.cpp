#include "rect_point.h"
#include <iostream>


RectangularPoint::RectangularPoint(double x, double y){
    this->x = x;
    this->y = y;
}

double RectangularPoint::get_x() const{
    return this->x;
}

double RectangularPoint::get_y() const{
    return this->y;
}

void RectangularPoint::set_x(double x){
    this->x = x;
}

void RectangularPoint::set_y(double y){
    this->y = y;
}

RectangularPoint RectangularPoint::operator+(const RectangularPoint& p) const{
    RectangularPoint result(this->x + p.x, this->y + p.y);
    return result;
}

RectangularPoint RectangularPoint::operator-(const RectangularPoint& p) const{
    RectangularPoint result(this->x - p.x, this->y - p.y);
    return result;
}