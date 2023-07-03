#include <cmath>

#include "point.h"

Point::Point(){
    x = 0;
    y = 0;
}

//Using 'this' pointer to distinguish between class attributes and parameters
Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}

int Point::getX() const{
    return x;
}

void Point::setX(int value){
    x = value;
}

int Point::getY() const{
    return y;
}

void Point::setY(int value){
    y = value;
}

float Point::distance_to_point(Point p){
    return sqrt(pow(p.getX() - x, 2) + pow(p.getY() - y, 2));
}

