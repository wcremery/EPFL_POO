#pragma once
#include <string>
#include "Paper.h"
#include "Assistant.h"

class Spectator
{
private:
	unsigned int age_;
	unsigned int money_;
	Paper paper_;
public:
	unsigned int age() const;
	unsigned int money() const;
	Paper paper() const;
	Spectator();
	void writeInfos();
	void showPaper(Assistant const& assistant) const;
};

