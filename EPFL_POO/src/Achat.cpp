#include "../include/Achat.h"

#include <iostream>

Achat::Achat(Article const& article, int const& quantite)
	: article_(article), quantite_(quantite)
{ }

void Achat::afficher() const
{
	std::cout << article_.nom() << " : " << article_.prix() << " x " << quantite_ << " = " << coutAchat() << " Frs";
	if (article_.isSolde()) { std::cout << " (en action)" << std::endl; }
	else { std::cout << std::endl; }
}

double Achat::coutAchat() const
{
	double total(article_.prix() * quantite_);
	if (article_.isSolde()) total /= 2;
	return total;
}