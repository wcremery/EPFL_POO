#pragma once
class Point3D
{
private:
	double x_;
	double y_;
	double z_;
public:
	double x() const;
	double y() const;
	double z() const;
	void init(double const& x, double const& y, double const& z);
	void display() const;
	bool compare(Point3D const& otherPoint) const;
};

