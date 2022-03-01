#pragma once

#include "../include/Compte.h"

class CompteEpargne : public virtual Compte
{
public:
	CompteEpargne(double const& montant);
	void afficherSolde() const override;

};

