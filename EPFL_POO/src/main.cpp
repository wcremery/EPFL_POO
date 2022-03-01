#include <iostream>

#include "../include/Fleur.h"

using namespace std;

int main()
{
    Fleur f1("Violette", "bleu");
    Fleur f2(f1);
    cout << "dans un cristal ";
    f2.eclore();
    cout << "Donne un poeme un peu fleur bleue" << endl
        << "ne laissant plus ";

    return 0;
}