#include <iostream>
using namespace std;

/*******************************************
 * Complétez le programme à partir d'ici.
 *******************************************/

class Tirelire
{
private:
    double montant_;
public:
    double getMontant() const;
    void afficher() const;
    void secouer() const;
    bool remplir(double const& montant);
    void vider();
    void puiser(double const& montant);
    bool montant_suffisant(double const& budget, double& solde);
    double calculerSolde(double const& budget) const;
};

/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

int main()
{
    Tirelire piggy;

    piggy.vider();
    piggy.secouer();
    piggy.afficher();

    piggy.puiser(20.0);
    piggy.secouer();
    piggy.afficher();

    piggy.remplir(550.0);
    piggy.secouer();
    piggy.afficher();

    piggy.puiser(10.0);
    piggy.puiser(5.0);
    piggy.afficher();

    cout << endl;

    // le budget de vos vacances de rève.
    double budget;

    cout << "Donnez le budget de vos vacances : ";
    cin >> budget;

    // ce qui resterait dans la tirelire après les
    // vacances
    double solde(0.0);

    if (piggy.montant_suffisant(budget, solde)) {
        cout << "Vous êtes assez riche pour partir en vacances !"
            << endl
            << "Il vous restera " << solde << " euros"
            << " à la rentrée." << endl << endl;
        piggy.puiser(budget);
    }
    else {
        cout << "Il vous manque " << solde << " euros"
            << " pour partir en vacances !" << endl << endl;
    }
    return 0;
}

double Tirelire::getMontant() const
{
    return montant_;
}

void Tirelire::afficher() const
{
    if (montant_ == 0) { std::cout << "Vous etes sans le sou."; }
    else { std::cout << "Vous avez : " << montant_ << " euros dans votre tirelire"; }
    std::cout << std::endl;
}

void Tirelire::secouer() const
{
    if (montant_ > 0) { std::cout << "Bing bing" << std::endl; }
}

bool Tirelire::remplir(double const& montant)
{
    if (montant < 1) return false;

    montant_ += montant;
    return true;
}

void Tirelire::vider()
{
    montant_ = 0.0;
}

void Tirelire::puiser(double const& montant)
{
    if (montant < 1) return;
    if (this->montant_ <= montant) vider();
    else this->montant_ -= montant;
}

bool Tirelire::montant_suffisant(double const& budget, double& solde)
{
    if (budget < 1) { solde = montant_; return true; }
    if (budget <= montant_) { puiser(budget); solde = montant_; return true; }
    else { solde = budget - montant_;  return false; }
}

double Tirelire::calculerSolde(double const& budget) const
{
    if (budget < 1) return montant_;

    return montant_ - budget;
}