#include <iostream>
#include <string>
using namespace std;

class Souris
{
    /*****************************************************
      Compléter le code �  partir d'ici
    *******************************************************/
public:
    Souris(double const& poids, std::string const& couleur, unsigned int const& age = 0, unsigned int const& esperance_vie = 36) : poids(poids), couleur(couleur), age(age), esperance_vie(esperance_vie), clonee(false)
    {
        std::cout << "Une nouvelle souris !" << std::endl;
    }

    Souris(Souris const& other) : poids(other.poids), couleur(other.couleur), age(other.age), esperance_vie(other.esperance_vie * (4.0 / 5)), clonee(true)
    {
        std::cout << "Clonage d'une souris !" << std::endl;
    }
    ~Souris() { std::cout << "Fin d'une souris..." << std::endl; }
    void afficher()
    {
        std::cout << "Une souris " << couleur;
        if (clonee) std::cout << ", clonee,";
        std::cout << " de " << age << " mois et pesant " << poids << " grammes" << std::endl;
    }
    void vieillir()
    {
        ++age;
        if (clonee && age > (esperance_vie / 2) && couleur.compare("Verte") != 0) { couleur = "verte"; }
    }
    void evolue()
    {
        while (age < esperance_vie) { vieillir(); }
    }

private:
    double poids;
    std::string couleur;
    unsigned int age;
    unsigned int esperance_vie;
    bool clonee;
    /*******************************************
     * Ne rien modifier après cette ligne.
     *******************************************/

}; // fin de la classe Souris

int main()
{
    Souris s1(50.0, "blanche", 2);
    Souris s2(45.0, "grise");
    Souris s3(s2);
    // ... un tableau peut-être...
    s1.afficher();
    s2.afficher();
    s3.afficher();
    s1.evolue();
    s2.evolue();
    s3.evolue();
    s1.afficher();
    s2.afficher();
    s3.afficher();
    return 0;
}