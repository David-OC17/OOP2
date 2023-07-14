#include<list>
#include <iostream>

#include "shape.h"
#include "circle.h"
#include "polygon.h"
#include "rectangle.h"
#include "triangle.h"


int main(){
    list<Shape*> shapes;

    shapes.push_back(new Circle(10, 10, 5));
    shapes.push_back(new Rectangulo(20, 20, 10, 10));
    shapes.push_back(new Triangulo(30, 30, 10, 10));
    shapes.push_back(new Poligono(5, 10, 40, 40));

    for (Shape* shape : shapes){
        std::cout << shape->draw() << std::endl;
        std::cout << shape->getArea() << std::endl;
    };
    
    return EXIT_SUCCESS;
};