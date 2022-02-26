#pragma once
class Paper
{
private:
	unsigned int age_;
	unsigned int money_;
public:
	unsigned int age() const;
	void age(unsigned int const& age);
	unsigned int money() const;
	void money(unsigned int const& money);
};

