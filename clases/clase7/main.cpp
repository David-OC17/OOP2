#include "rect_point.h"
#include <iostream>

int main(){
    RectangularPoint p1(1, 2);
    RectangularPoint p2(3, 4);

    RectangularPoint p3 = p1 + p2;
    RectangularPoint p4 = p1 - p2;

    std::cout << p3.get_x() << ", " << p3.get_y() << std::endl;
    std::cout << p4.get_x() << ", " << p4.get_y() << std::endl;

    return EXIT_SUCCESS;
};