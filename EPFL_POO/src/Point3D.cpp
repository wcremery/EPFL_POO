#include "../include/Point3D.h"
#include <iostream>

void Point3D::init(double const& x, double const& y, double const& z)
{
	this->x_ = x;
	this->y_ = y;
	this->z_ = z;
}

void Point3D::display() const
{
	std::cout << "(" << x_ << ", " << y_ << ", " << z_ << ")" << std::endl;
}

bool Point3D::compare(Point3D const& otherPoint) const
{
	if (x_ != otherPoint.x_) { return false; }
	if (y_ != otherPoint.y_) { return false; }
	if (z_ != otherPoint.z_) { return false; }

	return true;
}