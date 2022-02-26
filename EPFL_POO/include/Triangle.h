#pragma once

#include "../include/Point3D.h"

#include <array>

#ifndef NB_VERTEX
#define NB_VERTEX 3
#endif // !NB_VERTEX


class Triangle
{
private:
	std::array<Point3D, NB_VERTEX> vertices;
public: 
	void init();
	double computeDistance(Point3D const& v1, Point3D const& v2) const;
	double computePerimeter() const;
	bool isIsoceles() const;
};

