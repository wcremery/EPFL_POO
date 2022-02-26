#include <iostream>
using namespace std;

/*****************************************************
 * Compléter le code à partir d'ici
 *****************************************************/

class Patient
{
private:
    double masse;
    double hauteur;
public:
    void init(double const& masse, double const& hauteur);
    void afficher() const;
    double poids() const;
    double taille() const;
    double imc() const;
};

/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

int main()
{
    Patient quidam;
    double poids, taille;
    do {
        cout << "Entrez un poids (kg) et une taille (m) : ";
        cin >> poids >> taille;
        quidam.init(poids, taille);
        quidam.afficher();
        cout << "IMC : " << quidam.imc() << endl;
    } while (poids * taille != 0.0);
    return 0;
}

void Patient::init(double const& masse, double const& hauteur)
{
    if (masse < 1 && hauteur < 1) { this->masse = 0; this->hauteur = 0; }
    else { this->masse = masse; this->hauteur = hauteur; }
}

void Patient::afficher() const
{
    std::cout << "Patient : " << masse << " kg pour " << hauteur << " m" << std::endl;
}

double Patient::poids() const
{
    return masse;
}

double Patient::taille() const
{
    return hauteur;
}

double Patient::imc() const
{
    if (hauteur == 0) { return 0; }

    return (masse / (hauteur * hauteur));
}