#include "../include/Triangle.h"

#include <iostream>
#include <cmath>

void Triangle::init()
{
	for (size_t i{ 0 }; i < vertices.size(); ++i)
	{
		std::cout << "Building vertix " << i << std::endl;

		double posX, posY, posZ;
		std::cout << "x: ";
		std::cin >> posX;

		std::cout << "y: ";
		std::cin >> posY;

		std::cout << "z: ";
		std::cin >> posZ;

		vertices[i] = Point3D(posX, posY, posZ);
	}
}

double Triangle::computeDistance(Point3D const& v1, Point3D const& v2) const
{
	return (
		std::sqrt(
			((v1.x() - v2.x()) * (v1.x() - v2.x()) +
				((v1.y() - v2.y()) * (v1.y() - v2.y())) +
				((v1.z() - v2.z()) * (v1.z() - v2.z())))
		)
		);
}

double Triangle::computePerimeter() const
{
	double sumDistances{ 0.0 };

	for (size_t i{ 0 }; i < vertices.size(); ++i)
	{
		size_t next{ (i + 1) % (vertices.size()) };
		std::cout << "[log] i: " << i << " next: " << next << std::endl;
		sumDistances += computeDistance(vertices[i], vertices[next]);
	}

	return sumDistances;
}

bool Triangle::isIsoceles() const
{
	std::array<double, NB_VERTEX> distances;

	for (size_t i{ 0 }; i < distances.size(); ++i)
	{
		distances[i] = computeDistance(vertices[i], vertices[((i + 1) % (vertices.size() - 1))]);
	}

	return (distances[0] == distances[1]
		|| distances[0] == distances[2]
		|| distances[1] == distances[2]);
}