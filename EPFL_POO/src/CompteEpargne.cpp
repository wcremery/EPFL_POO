#include "../include/CompteEpargne.h"

#include <iostream>

CompteEpargne::CompteEpargne(double const& montant) 
{
	montant_ = montant;
	taux_ = 0.02;
}

void CompteEpargne::afficherSolde() const
{
	std::cout << "\tCompte epargne : " << montant_ << " francs" << std::endl;
}