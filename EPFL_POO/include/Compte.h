#pragma once

class Compte
{
public:
	virtual void afficherSolde() const = 0;
	void fermerCompte();
protected:
	double montant_;
	double taux_;
};