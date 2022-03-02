#include "../include/Caisse.h"

#include <iostream>

void Caisse::afficher() const
{
	std::cout << "La caisse " << numero_caisse_ << " a encaisse " << total_achat_ << " Frs aujourd'hui." << std::endl;
}

void Caisse::scanner(Caddie const& caddie)
{
	double total_caddie(0.0);

	for (auto const& article : caddie.achats())
	{
		article.afficher();
		total_caddie += article.coutAchat();
	}

	std::cout << "-----\nTotal a payer : " << total_caddie << " F." << std::endl;

	total_achat_ += total_caddie;
}