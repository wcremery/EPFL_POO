#pragma once

#include "Caddie.h"

class Caisse
{
public:
	void afficher() const;
	void scanner(Caddie const& caddie);
private:
	int numero_caisse_ = 0;
	double total_achat_ = 0.0;
};

