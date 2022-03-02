#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*******************************************
 * Completez le programme a partir d'ici.
 *******************************************/
 // Chaines de caractères �  utiliser pour les affichages:
 /*

 été jeté

 d'un

 n'est

 L'oeuvre

 bibliothèque

 détruit

 */

class Auteur 
{
public:
    Auteur(std::string const& nom, bool const& prime=false) : nom(nom), prime(prime) {}
    Auteur(Auteur const& other) = delete;
    inline std::string getNom() const { return nom; }
    inline bool getPrix() const { return prime; }
private:
    std::string nom;
    bool prime;
};

class Oeuvre
{
public:
    Oeuvre(std::string titre, Auteur const& auteur, std::string langue) : titre(titre), auteur(auteur), langue(langue) {}
    Oeuvre(Oeuvre const& autre) = delete;
    ~Oeuvre()
    {
        std::cout << "L'oeuvre \"" << titre << ", " << auteur.getNom() << ", en " << langue << "\" n'est plus disponible." << std::endl;
    }
    inline std::string getTitre() const { return titre;  }
    inline Auteur const& getAuteur() const { return auteur; }
    inline std::string getLangue() const { return langue; }
    void affiche() const
    {
        std::cout << titre << ", " << auteur.getNom() << ", en " << langue << std::endl;
    }
private:
    std::string titre;
    Auteur const& auteur;
    std::string langue;
};

class Exemplaire
{
public:
    Exemplaire(Oeuvre const& oeuvre) : oeuvre(oeuvre)
    {
        std::cout << "Nouvelle exemplaire de : " << oeuvre.getTitre() << ", " << oeuvre.getAuteur().getNom() << ", en " << oeuvre.getLangue() << std::endl;
    }
    Exemplaire(Exemplaire const& autre) : oeuvre(autre.oeuvre)
    {
        std::cout << "Copie d'un exemplaire de : " << oeuvre.getTitre() << ", " << oeuvre.getAuteur().getNom() << ", en " << oeuvre.getLangue() << std::endl;
    }
    ~Exemplaire()
    {
        std::cout << "Un exemplaire de \"" << oeuvre.getTitre() << ", " << oeuvre.getAuteur().getNom() << ", en " << oeuvre.getLangue() << "\" a ete jete !" << std::endl;
    }
    inline Oeuvre const& getOeuvre() const { return oeuvre; }
    void affiche() const
    {
        std::cout << "Exemplaire de : " << oeuvre.getTitre() << ", " << oeuvre.getAuteur().getNom() << ", en " << oeuvre.getLangue();
    }
private:
    Oeuvre const& oeuvre;
};

class Bibliotheque
{
public:
    Bibliotheque(std::string nom) : nom(nom)
    {
        std::cout << "La bibliotheque " << nom << " est ouverte !" << std::endl;
    }
    ~Bibliotheque()
    {
        std::cout << "La bibliotheque " << nom << " ferme ses portes, et d�truit ses exemplaires : " << std::endl;
        for (auto const& exemplaire : exemplaires)
        {
            delete exemplaire;
        }         
    }
    inline std::string getNom() const { return nom; }
    void stocker(Oeuvre const& oeuvre, int const& nombre = 1)
    {
        for (size_t i{ 0 }; i < nombre; ++i)
        {
            exemplaires.push_back(new Exemplaire(oeuvre));
        }
    }
    void lister_exemplaires(std::string const& langue = "") const
    {
        if (langue.compare("") == 0)
        {
            for (size_t i{ 0 }; i < exemplaires.size(); ++i)
            {
                if (exemplaires[i]->getOeuvre().getLangue() == langue) { exemplaires[i]->getOeuvre().affiche(); std::cout << std::endl; }
            }
        }
        else
        {
            for (auto const& exemplaire : exemplaires)
            {
                exemplaire->getOeuvre().affiche(); std::cout << std::endl;
            }
        }
    }
    int compter_exemplaires(Oeuvre const& oeuvre) const 
    {
        int nombre_exemplaire(0);

        for (size_t i{ 0 }; i < exemplaires.size(); ++i)
        {
            // peut etre incomplet pour savoir si deux exemplaires sont identiques 
            if (exemplaires[i]->getOeuvre().getTitre() == oeuvre.getTitre()) { ++nombre_exemplaire; }
        }

        return nombre_exemplaire;
    }
    void afficher_auteurs(bool const& prix = false) const
    {
        for (auto const& exemplaire : exemplaires)
        {
            if (prix && exemplaire->getOeuvre().getAuteur().getPrix()) { std::cout << exemplaire->getOeuvre().getAuteur().getNom() << std::endl; }
            else if (!prix) { std::cout << exemplaire->getOeuvre().getAuteur().getNom() << std::endl; }
        }
    }
private:
    std::string nom;
    std::vector<Exemplaire*> exemplaires;
};

 /*******************************************
  * Ne rien modifier apres cette ligne.
  *******************************************/

int main()
{
    Auteur a1("Victor Hugo"),
        a2("Alexandre Dumas"),
        a3("Raymond Queneau", true);

    Oeuvre o1("Les Misérables", a1, "français"),
        o2("L'Homme qui rit", a1, "français"),
        o3("Le Comte de Monte-Cristo", a2, "français"),
        o4("Zazie dans le métro", a3, "français"),
        o5("The Count of Monte-Cristo", a2, "anglais");

    Bibliotheque biblio("municipale");
    biblio.stocker(o1, 2);
    biblio.stocker(o2);
    biblio.stocker(o3, 3);
    biblio.stocker(o4);
    biblio.stocker(o5);

    cout << "La bibliothèque " << biblio.getNom()
        << " offre les exemplaires suivants :" << endl;
    biblio.lister_exemplaires();

    const string langue("anglais");
    cout << " Les exemplaires en " << langue << " sont :" << endl;
    biblio.lister_exemplaires(langue);

    cout << " Les auteurs �  succès sont :" << endl;
    biblio.afficher_auteurs(true);

    cout << " Il y a " << biblio.compter_exemplaires(o3) << " exemplaires de "
        << o3.getTitre() << endl;

    return 0;
}