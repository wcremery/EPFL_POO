#include "../include/Caddie.h"

void Caddie::remplir(Article const& article, int const& quantite)
{
	Achat achat(article, quantite);
	achats_.push_back(achat);
}

std::vector<Achat> Caddie::achats() const { return achats_; }