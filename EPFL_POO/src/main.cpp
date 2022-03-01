#include <iostream>

#include "../include/Banque.h"

int main()
{
    Banque banque;
    Client c1 = banque.creerClient("Pedro", "Genève", true, 1000.0, 2000.0);
    Client c2 = banque.creerClient("Alexandra", "Lausanne", false, 3000.0, 4000.0);

    std::cout << "Données avant le bouclement des comptes :" << std::endl;
    banque.afficherClient(c1);
    banque.afficherClient(c2);

    for (size_t i{ 0 }; i < c1.comptes().size(); ++i)
    {
        c1.comptes()[i].fermerCompte();
    }

    for (size_t i{ 0 }; i < c2.comptes().size(); ++i)
    {
        c2.comptes()[i].fermerCompte();
    }

    std::cout << "Données apres le bouclement des comptes :" << std::endl;
    banque.afficherClient(c1);
    banque.afficherClient(c2);

    return 0;
}
