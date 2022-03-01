#pragma once

#include<vector>

#include "Compte.h"
#include "Client.h"

class Banque
{
public:
    Client creerClient(std::string const& nom, std::string const& ville, bool const& bMale, double const& soldeCourant, double const& soldeEpargne = 0.0);
    // Cette fonction affiche les données d'un client
    void afficherClient(Client const&) const;
private:
	std::vector<Client> clients_;
};

