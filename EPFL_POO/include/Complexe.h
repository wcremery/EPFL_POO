#pragma once

#include <iostream>

class Complexe
{
private:
	double reel_;
	double imaginaire_;
public:
	Complexe(double reel = 0.0, double imaginaire = 0.0);
	inline double reel() const { return reel_; }
	inline double imaginaire() const { return imaginaire_; }
	const bool operator==(Complexe const& other) const;
	const Complexe& operator+=(Complexe const& complexe);
	const Complexe& operator-=(Complexe const& complexe);
	const Complexe& operator*=(Complexe const& complexe);
	const Complexe& operator/=(Complexe const& complexe);
};

std::ostream& operator<<(std::ostream& out, Complexe const& complexe);
const Complexe operator+(Complexe c1, Complexe const& c2);
const Complexe operator*(Complexe c1, Complexe const& c2);
const Complexe operator/(Complexe c1, Complexe const& c2);