#include "../include/Apero.h"

#include <iostream>

Apero::Apero()
{
	std::cout << "L'heure de l'apero a sonne !" << std::endl;
}

Apero::~Apero()
{
	std::cout << "A table !" << std::endl;
}

void Apero::bis() const { std::cout << "Encore une ?" << std::endl; }