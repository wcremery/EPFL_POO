#include "../include/Fleur.h"

#include <iostream>

Fleur::Fleur(std::string const& type, std::string const& couleur)
{
	this->couleur_ = couleur;
	std::cout << type << " fraichement cueillie" << std::endl;
}

Fleur::Fleur(Fleur const& other)
{
	this->couleur_ = other.couleur_;
	std::cout << "Fragile corlle taillee" << std::endl;
}

Fleur::~Fleur()
{
	std::cout << "qu'un simple souffle..." << std::endl;
}

void Fleur::eclore() const { std::cout << "veine de " << couleur_ << std::endl; }