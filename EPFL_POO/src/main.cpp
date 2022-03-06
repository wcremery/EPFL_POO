#include <iostream>

#include "../include/Complexe.h"

int main()
{
    Complexe defaut;
    Complexe zero(0.0, 0.0);
    Complexe un(1.0, 0.0);
    Complexe i(0.0, 1.0);
    Complexe j;

    std::cout << zero << " ==? " << defaut;
    if (zero == defaut) std::cout << " oui" << std::endl;
    else std::cout << " non" << std::endl;
    std::cout << zero << " ==? " << i;
    if (zero == i) std::cout << " oui" << std::endl;
    else std::cout << " non" << std::endl;

    j = un + i;
    std::cout << un << " + " << i << " = " << j << std::endl;
    Complexe trois(un);
    trois += un;
    trois += 1.0;
    std::cout << un << " + " << un << " + 1.0 = " << trois << std::endl;
    Complexe deux(trois);
    deux -= un;
    std::cout << trois << " - " << un << " = " << deux << std::endl;
    trois = 1.0 + deux;
    std::cout << "1.0 + " << deux << " = " << trois << std::endl;

    Complexe z(i * i);
    std::cout << i << " * " << i << " = " << z << std::endl;
    std::cout << z << " / " << i << " = " << z / i << " = ";
    std::cout << (z /= i) << std::endl;

    Complexe k(2.0, -3.0);
    z = k;
    z *= 2.0;
    z *= i;
    std::cout << k << " * 2.0 * " << i << " = " << z << std::endl;
    z = 2.0 * k * i / 1.0;
    std::cout << " 2.0 * " << k << " * " << i << " / 1 = " << z << std::endl;

    return 0;
}
