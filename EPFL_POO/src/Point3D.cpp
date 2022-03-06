#include "../include/Point3D.h"

double Point3D::x() const
{
	return x_;
}

double Point3D::y() const
{
	return y_;
}

double Point3D::z() const
{
	return z_;
}

Point3D::Point3D(double const& x, double const& y, double const& z)
{
	this->x_ = x;
	this->y_ = y;
	this->z_ = z;
}

bool Point3D::compare(Point3D const& otherPoint) const
{
	if (x_ != otherPoint.x_) { return false; }
	if (y_ != otherPoint.y_) { return false; }
	if (z_ != otherPoint.z_) { return false; }

	return true;
}

std::ostream& operator<<(std::ostream& out, Point3D point3D)
{
	out << "(" << point3D.x() << ", " << point3D.y() << ", " << point3D.z() << ")";

	return out;
}