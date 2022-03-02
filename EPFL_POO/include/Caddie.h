#pragma once

#include <vector>
#include "Achat.h"

class Caddie
{
public:
	void remplir(Article const& article, int const& quantite = 1);
	std::vector<Achat> achats() const;
private:
	std::vector<Achat> achats_;
};

