#pragma once
class Point3D
{
private:
	double x_;
	double y_;
	double z_;
public:
	void init(double const& x, double const& y, double const& z);
	void display() const;
	bool compare(Point3D const& otherPoint) const;
};

