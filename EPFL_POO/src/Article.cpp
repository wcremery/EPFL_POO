#include "../include/Article.h"

Article::Article(std::string const& nom, double const& prix, bool const& bSolde)
	: nom_(nom), prix_(prix), bSolde_(bSolde)
{ }

std::string Article::nom() const { return nom_; }

double Article::prix() const { return prix_; }

bool Article::isSolde() const { return bSolde_; }