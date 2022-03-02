#include <iostream>
#include <vector>

#include "../include/Article.h"
#include "../include/Caddie.h"
#include "../include/Caisse.h"

int main()
{
    // Les articles vendus dans le supermarché
    Article choufleur("Chou-fleur extra", 3.50);
    Article roman("Les malheurs de Sophie", 16.50, true);
    Article camembert("Cremeux 100%MG", 5.80);
    Article cdrom("C++ en trois jours", 48.50);
    Article boisson("Petit-lait", 2.50, true);
    Article petitspois("Pois surgeles", 4.35);
    Article poisson("Sardines", 6.50);
    Article biscuits("Cookies de grand-mere", 3.20);
    Article poires("Poires Williams", 4.80);
    Article cafe("100% Arabica", 6.90, true);
    Article pain("Pain d'epautre", 6.90);

    // Les caddies du supermarché, disons 3 ici
    std::vector<Caddie> caddies(3);

    // Les caisses du supermarché, disons 2
    std::vector<Caisse> caisses(2);

    // Les clients font leurs achats :
    // le second argument de la méthode remplir correspond à une quantité

    // remplissage du 1er caddie
    caddies[0].remplir(choufleur, 2);
    caddies[0].remplir(cdrom);
    caddies[0].remplir(biscuits, 4);
    caddies[0].remplir(boisson, 6);
    caddies[0].remplir(poisson, 2);

    // remplissage du 2eme caddie
    caddies[1].remplir(roman);
    caddies[1].remplir(camembert);
    caddies[1].remplir(petitspois, 2);
    caddies[1].remplir(poires, 2);

    // remplissage du 3eme caddie
    caddies[2].remplir(cafe, 2);
    caddies[2].remplir(pain);
    caddies[2].remplir(camembert, 2);

    // Les clients passent à la caisse :
    caisses[0].scanner(caddies[0]);
    std::cout << "=========================================" << std::endl;
    caisses[0].scanner(caddies[1]);
    std::cout << "=========================================" << std::endl;
    caisses[1].scanner(caddies[2]);
    std::cout << "=========================================" << std::endl;

    // Affichage du résultat des caisses
    std::cout << "Résultats du jour :" << std::endl;
    for (size_t i(0); i < caisses.size(); ++i) {
        std::cout << "Caisse " << i + 1 << " : ";
        caisses[i].afficher();
        std::cout << std::endl;
    }

    return 0;
}
