#include "triangle.h"

Triangulo::Triangulo()
{
    //ctor
}

Triangulo::Triangulo(int cx, int cy, float base, float altura):Shape(cx,cy)
{
    this->base=base;
    this->altura=altura;
}

Triangulo::~Triangulo()
{
    //dtor
}

float Triangulo::getBase() const{
    return base;
}

void Triangulo::setBase(float base){
    this->base=base;
}

float Triangulo::getAltura() const{
    return altura;
}

void Triangulo::setAltura(float altura){
    this->altura=altura;
}

float Triangulo::getArea() const{
    return base*altura/2;
}

string Triangulo::draw(){
    return "Soy un triangulo";
}