#pragma once

#include "../include/Article.h"

class Achat
{
public:
	Achat(Article const& article, int const& quantite);
	void afficher() const;
	double coutAchat() const;
private:
	Article article_;
	int quantite_;
};

