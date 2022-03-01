#include "../include/Compte.h"

void Compte::fermerCompte()
{
	montant_ += (taux_ * montant_);
}