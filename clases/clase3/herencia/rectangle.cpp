#include "rectangle.h"

Rectangulo::Rectangulo()
{
    //ctor
}

Rectangulo::Rectangulo(int cx, int cy, float base, float altura):Shape(cx,cy)
{
    this->base=base;
    this->altura=altura;
}

Rectangulo::~Rectangulo()
{
    //dtor
}

float Rectangulo::getBase() const{
    return base;
}

void Rectangulo::setBase(float base){
    this->base=base;
}

float Rectangulo::getAltura() const{
    return altura;
}

void Rectangulo::setAltura(float altura){
    this->altura=altura;
}

float Rectangulo::getArea() const{
    return base*altura;
}

string Rectangulo::draw(){
    return "Soy un rectangulo";
}