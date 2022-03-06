#pragma once

#include <iostream>

class Point3D
{
private:
	double x_;
	double y_;
	double z_;
public:
	Point3D(double const& x, double const& y, double const& z);
	double x() const;
	double y() const;
	double z() const;
	bool compare(Point3D const& otherPoint) const;
};

std::ostream& operator<<(std::ostream& out, Point3D point3D);