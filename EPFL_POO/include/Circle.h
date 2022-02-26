#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <cmath>
#include "../include/Coord.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class Circle
{
private:
	double radius_;
	Coord center_;
public:
	double radius() const;
	void radius(double const& rayon);
	Coord coord() const;
	void coord(Coord const& coord);
	double surface() const;
	bool isInside(Coord const& point) const;
};

#endif // !__CIRCLE_H__