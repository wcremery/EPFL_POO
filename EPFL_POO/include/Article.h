#pragma once

#include <string>
class Article
{
public:
	Article(std::string const& nom, double const& prix, bool const& bSolde = false);
	std::string nom() const;
	double prix() const;
	bool isSolde() const;
private:
	std::string nom_;
	double prix_;
	bool bSolde_;
};

