#pragma once

#include "../include/compte.h"

class CompteCourant : public virtual Compte
{
public:
	CompteCourant(double const& montant);
	void afficherSolde() const override;
};

