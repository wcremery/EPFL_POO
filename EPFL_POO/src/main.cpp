#include <iostream>
#include <vector>
#include <cmath>

#include "../include/Circle.h"

int main()
{
    Circle* c1 = new Circle();
    Circle* c2 = new Circle();

    Coord* coordC1 = new Coord();
    coordC1->posX(1.0);
    coordC1->posY(2.0);
    c1->coord(*coordC1);
    c1->radius(std::sqrt(5.0));

    Coord* coordC2 = new Coord();
    coordC2->posX(-2.0);
    coordC2->posY(1.0);
    c2->coord(*coordC2);
    c2->radius(2.25);

    std::cout << "C1 surface : " << c1->surface() << std::endl;
    std::cout << "C2 surface : " << c2->surface() << std::endl;
    std::cout << "C2 in C1 : " << std::boolalpha << c1->isInside(c2->coord()) << std::endl;

    return 0;
}