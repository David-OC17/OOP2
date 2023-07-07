#include "polygon.h"
#include <math.h>

Poligono::Poligono()
{
    //ctor
}

Poligono::Poligono(int numLados, float lado, int cx, int cy):Shape(cx,cy)
{
    this->lado=lado;
    this->numLados=numLados;
}

Poligono::~Poligono()
{
    //dtor
}

float Poligono::getLado() const{
    return lado;
}

void Poligono::setLado(float lado){
    this->lado=lado;
}


float Poligono::getArea() const{
    float numerator = pow(lado, 2) * numLados;
    float denominator = 4 * tan(M_PI / numLados);
    float area = numerator / denominator;
    return area;
}

string Poligono::draw(){
    return "Soy un poligono";
}

int Poligono::getNumLados() const{
    return numLados;
}

void Poligono::setNumLados(int numLados){
    this->numLados=numLados;
}

