#include "../include/Spectator.h"
#include <iostream>

Spectator::Spectator()
{
	std::cout << "[Spectator] (It's my time)" << std::endl;

	unsigned int age{ 0 };
	do
	{
		std::cout << "[Spectator] How old am i ? ";
		std::cin >> age;
	} while (age < 1 || age > 99);
	this->age_ = age;

	unsigned int money{ 0 };
	do
	{
		std::cout << "[Spectator] How much money do I have ? ";
		std::cin >> money;
	} while (money < 1 || money > 99);
	this->money_ = money;

	std::cout << "[Spectator] (Over here)" << std::endl;
}

unsigned int Spectator::age() const
{
	return age_;
}

unsigned int Spectator::money() const
{
	return money_;
}

Paper Spectator::paper() const
{
	return paper_;
}

void Spectator::writeInfos()
{
	std::cout << "[Spectator] (I'm writing on the paper)" << std::endl;
	paper_.age(age_);
	paper_.money(money_);
}

void Spectator::showPaper(Assistant const& assistant) const
{
	std::cout << "[Spectator] (I'm showing the paper)" << std::endl;
	assistant.readPaper();
}