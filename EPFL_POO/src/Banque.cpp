#include "../include/Banque.h"

#include <iostream>

Client Banque::creerClient(std::string const& nom, std::string const& ville, bool const& bMale, double const& soldeCourant, double const& soldeEpargne)
{
	Client client(nom, ville, bMale, soldeCourant, soldeEpargne);
    clients_.push_back(client);
	return client;
}

// Cette fonction affiche les données d'un client
void Banque::afficherClient(Client const& client) const {
	if (client.male()) std::cout << "Client ";
	else std::cout << "Cliente ";
	std::cout << client.nom() << " de " << client.ville() << std::endl;
	for (auto const& compte : client.comptes())
	{
		compte.afficherSolde();
	}
}