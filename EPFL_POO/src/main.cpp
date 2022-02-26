#include <iostream>
#include <vector>
#include <cmath>

#include "../include/Magician.h"
#include "../include/Assistant.h"
#include "../include/Spectator.h"

int main()
{
    Spectator* spectator = new Spectator();
    Magician* magician = new Magician();
    Assistant* assistant = new Assistant();
    
    magician->doTrick(*spectator, *assistant);

    return 0;
}