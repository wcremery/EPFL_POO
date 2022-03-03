#include<iostream>
#include<vector>
#include<string>

typedef size_t Degre;

class Polynome
{
private:
	std::vector<double> p;
public:
	Polynome(double coeff = 1.0, double degre = 0.0) : p(coeff,	degre) {}
	Degre degre() const { return p.size() - 1; }
	std::string afficher() const 
	{ 

	}
};

std::ostream& operator<<(std::ostream& os, Polynome const& p)
{

}