#pragma once

class Coord
{
public:
	double posX() const;
	void posX(double const& posX);
	double posY() const;
	void posY(double const& posY);
	Coord& operator=(Coord const& source);
private:
	double posX_;
	double posY_;
};

