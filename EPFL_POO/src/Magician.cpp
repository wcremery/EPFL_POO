#include "../include/Magician.h"
#include <iostream>

void Magician::doTrick(Spectator& spectator, Assistant const& assistant)
{
	std::cout << "[Magician] A little magic trick ?" << std::endl;
	spectator.writeInfos();
	unsigned int magicalNumber{assistant.sayMagicalNumber(spectator.paper()) + 115};
	std::cout << "[Magician] - hmm... My guess is that you are " << magicalNumber / 100
		<< " old and that you have " << magicalNumber % 100 << " in your pocket !" << std::endl;
}
