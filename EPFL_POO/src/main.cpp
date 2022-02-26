#include <iostream>
#include <vector>
#include <cmath>

#include "../include/Point3D.h"

int main()
{
    Point3D point1;
    Point3D point2;
    Point3D point3;

    point1.init(1.0, 2.0, -0.1);
    point2.init(2.6, 3.5, 4.1);

    point3 = point1;
    std::cout << "Point 1 :";
    point1.display();

    std::cout << "Point 2 :";
    point2.display();

    std::cout << "Le point 1 est ";

    if (point1.compare(point2)) {
        std::cout << "identique au";
    }
    else {
        std::cout << "différent du";
    }
    std::cout << " point 2." << std::endl;
    std::cout << "Le point 1 est ";
    if (point1.compare(point3)) {
        std::cout << "identique au";
    }
    else {
        std::cout << "différent du";
    }
    std::cout << " point 3." << std::endl;

    return 0;
}