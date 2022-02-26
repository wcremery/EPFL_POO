#include <iostream>
#include <vector>
#include <cmath>

#include "../include/Triangle.h"

int main()
{
    Triangle* t = new Triangle();

    t->init();
    std::cout << "Perimeter: " << t->computePerimeter() << std::endl;
    if (t->isIsoceles()) { std::cout << "This triangle is isoceles !"; }
    else std::cout << "This triangle is NOT isoceles !";
    std::cout << std::endl;

    return 0;
}