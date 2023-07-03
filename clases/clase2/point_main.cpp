#include "point.h"
#include <iostream>

int main(){
    Point p1(1, 2);
    Point p2(3, 4);

    float distance = p1.distance_to_point(p2);
    std::cout << "Distance between p1 and p2: " << distance << std::endl;
    
    return EXIT_SUCCESS;
};