#include "../include/Complexe.h"

Complexe::Complexe(double reel, double imaginaire)
	: reel_(reel), imaginaire_(imaginaire)
{}

const bool Complexe::operator==(Complexe const& other) const
{
	return (reel_ == other.reel_ && imaginaire_ == other.imaginaire_);
}

const Complexe& Complexe::operator+=(Complexe const& complexe)
{
	this->reel_ += complexe.reel_;
	this->imaginaire_ += complexe.imaginaire_;

	return (*this);
}

const Complexe& Complexe::operator-=(Complexe const& complexe)
{
	this->reel_ -= complexe.reel_;
	this->imaginaire_ -= complexe.imaginaire_;

	return (*this);
}

const Complexe& Complexe::operator*=(Complexe const& complexe)
{
	Complexe temp(*this);
	this->reel_ = this->reel_ * complexe.reel_ - this->imaginaire_ * complexe.imaginaire_;
	this->imaginaire_ = temp.reel_ * complexe.imaginaire_ + this->imaginaire_ * complexe.reel_;

	return (*this);
}

const Complexe& Complexe::operator/=(Complexe const& complexe)
{
	Complexe temp(*this);
	this->reel_ = (this->reel_ * complexe.reel_ + this->imaginaire_ * complexe.imaginaire_) / (complexe.reel_ * complexe.reel_ + complexe.imaginaire_ * complexe.imaginaire_);
	this->imaginaire_ = this->imaginaire_ * complexe.reel_ - temp.reel_ * complexe.imaginaire_;

	return (*this);
}

std::ostream& operator<<(std::ostream& out, Complexe const& complexe)
{
	out << "(" << complexe.reel() << ", " << complexe.imaginaire() << ")";

	return out;
}

const Complexe operator+(Complexe c1, Complexe const& c2)
{
	return (c1 += c2);
}

const Complexe operator*(Complexe c1, Complexe const& c2)
{
	return (c1 *= c2);
}

const Complexe operator/(Complexe c1, Complexe const& c2)
{
	return (c1 /= c2);
}