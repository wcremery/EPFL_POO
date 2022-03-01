#pragma once

#include <string>

class Fleur
{
public:
	Fleur(std::string const& type, std::string const& couleur);
	Fleur(Fleur const& other);
	~Fleur();
	void eclore() const;
private:
	std::string couleur_;
};

