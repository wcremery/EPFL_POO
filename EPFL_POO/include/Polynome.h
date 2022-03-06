#pragma once

#include <vector>

typedef size_t Degre;

class Polynome
{
private:
	std::vector<double> p;
public:
	Polynome(double coeff = 0.0, Degre degre = 0) : p(degre + 1, 0.0) { p[degre] = coeff; }
	Degre degre() const;
};

