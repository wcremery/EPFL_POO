#include "../include/Paper.h"

unsigned int Paper::age() const
{
	return age_;
}

void Paper::age(unsigned int const& age)
{
	this->age_ = age;
}

unsigned int Paper::money() const
{
	return money_;
}

void Paper::money(unsigned int const& money)
{
	this->money_ = money;
}