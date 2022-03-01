#pragma once

#include <string>
#include <vector>

#include "Compte.h"

class Client
{
public:
	Client(std::string const& nom, std::string const& ville, bool const& bMale, double const& soldeCourant, double const& soldeEpargne = 0);
	std::string nom() const;
	bool male() const;
	std::string ville() const;
	std::vector<Compte> comptes() const;
private:
	std::string nom_;
	bool bMale_;
	std::string ville_;
	std::vector<Compte> comptes_;
};

