#include "../include/Coord.h"

double Coord::posX() const
{
	return this->posX_;
}

void Coord::posX(double const& posX)
{
	this->posX_ = posX;
}

double Coord::posY() const
{
	return this->posY_;
}

void Coord::posY(double const& posY)
{
	this->posY_ = posY;
}

Coord& Coord::operator=(Coord const& source)
{
	this->posX_ = source.posX_;
	this->posY_ = source.posY_;

	return *this;
}