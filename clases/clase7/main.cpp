#include "rect_point.h"
#include "polar_point.h"
#include <iostream>

int main(){
    RectangularPoint p1(1, 2);
    RectangularPoint p2(3, 4);

    RectangularPoint p3 = p1 + p2;
    RectangularPoint p4 = p1 - p2;

    std::cout << p3.get_x() << ", " << p3.get_y() << std::endl;
    std::cout << p4.get_x() << ", " << p4.get_y() << std::endl;

    PolarPoint p5(1, 2);
    PolarPoint p6(3, 4);

    PolarPoint p7 = p5 + p6;
    PolarPoint p8 = p5 - p6;

    std::cout << p7.get_r() << ", " << p7.get_theta() << std::endl;
    std::cout << p8.get_r() << ", " << p8.get_theta() << std::endl;
    
    return EXIT_SUCCESS;
};