#include "../include/Client.h"
#include "../include/CompteEpargne.h"
#include "../include/CompteCourant.h"

#include <iostream>
#include <vector>

Client::Client(std::string const& nom, std::string const& ville, bool const& bMale, double const& soldeCourant, double const& soldeEpargne)
	: nom_(nom), ville_(ville), bMale_(bMale)
{
	comptes_.push_back(CompteCourant(soldeCourant));
	if (soldeEpargne > 0) comptes_.push_back(CompteEpargne(soldeEpargne));
}

std::string Client::nom() const
{
	return nom_;
}

std::string Client::ville() const
{
	return ville_;
}

bool Client::male() const
{
	return bMale_;
}

std::vector<Compte> Client::comptes() const
{
	return comptes_;
}