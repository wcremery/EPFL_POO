#include "../include/CompteCourant.h"

#include <iostream>

CompteCourant::CompteCourant(double const& montant)
{
	montant_ = montant;
	taux_ = 0.01;
}

void CompteCourant::afficherSolde() const 
{
	std::cout << "\tCompte courant : " << montant_ << " francs" << std::endl;
}