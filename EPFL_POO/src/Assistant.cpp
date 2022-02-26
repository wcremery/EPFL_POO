#include "../include/Assistant.h"

#include <iostream>

void Assistant::readPaper() const
{
	std::cout << "[Assistant] (I'm reading the paper)" << std::endl;
}

unsigned int Assistant::sayMagicalNumber(Paper const& paper) const
{
	std::cout << "[Assistant] (I'm doing math)" << std::endl;
	unsigned int magicalNumber{ (paper.age() * 2 + 5) * 50 + paper.money() - 365 };
	std::cout << "[Assistant] I announce :  " << magicalNumber << " ! " << std::endl;

	return magicalNumber;
}