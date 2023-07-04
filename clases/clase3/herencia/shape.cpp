#include "shape.h"

Shape::Shape()
{
    x=0;
    y=0;
}

Shape::Shape(int x, int y){
    this->x=x;
    this->y=y;
}


string Shape::draw(){
    return "Soy una figura";
}

void Shape::setX(int cx){
    x=cx;
}

int Shape::getX(){
    return x;
}

void Shape::setY(int cy){
    y=cy;

}

int Shape::getY(){
    return y;

}

Shape::~Shape()
{
    //dtor
}