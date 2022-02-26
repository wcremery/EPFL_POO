#include "../include/Circle.h"


double Circle::radius() const
{
	return this->radius_;
}

void Circle::radius(double const& rayon)
{
	this->radius_ = rayon;
}

Coord Circle::coord() const
{
	return this->center_;
}

void Circle::coord(Coord const& coord)
{
	this->center_ = coord;
}

double Circle::surface() const
{
	return M_PI * radius_ * radius_;
}

bool Circle::isInside(Coord const& point) const
{
	// check if point is horizontally in the circle
	if (this->center_.posX() - this->radius_ <= point.posX()
		&& this->center_.posX() + this->radius_ >= point.posX()
		// check if point is vertically in the circle
		&& this->center_.posY() - this->radius_ <= point.posY()
		&& this->center_.posY() + this->radius_ >= point.posY())
	{
		return true;
	}
	return false;
}

