#include <iostream>
#include "shape.h"
#include "circle.h"
#include "polygon.h"
#include "rectangle.h"
#include "triangle.h"

using namespace std;

int main()
{
    //Create an instance of each of the five classes, the shapes and one from the shape class
    //Call draw on each of the instances
    //Use cout to print the result of each area calculation

    Shape shape(1, 2);
    cout << shape.draw() << endl;

    Circle circle(1, 2, 3);
    cout << circle.draw() << endl;
    cout << circle.getArea() << endl;

    Triangulo triangle(1, 2, 3, 4);
    cout << triangle.draw() << endl;
    cout << triangle.getArea() << endl;

    Rectangulo rectangle(1, 2, 3, 4);
    cout << rectangle.draw() << endl;
    cout << rectangle.getArea() << endl;

    Poligono poligono(5, 2.5, 3, 8);
    cout << poligono.draw() << endl;
    cout << poligono.getArea() << endl;

    return EXIT_SUCCESS;
}