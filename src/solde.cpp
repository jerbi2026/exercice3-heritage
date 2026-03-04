#include "solde.h"
#include "article.h"
#include <string>
#include <iostream>

solde::solde()
{
    //ctor
}

solde::~solde()
{
    //dtor
}

solde::solde(string nom , float prix, int solde): article(nom, prix)
{

    this->remise = solde;
    //ctor
}

float solde::get_prix(){
    float prix_apr_solde = this->prix - (this->prix * this->remise) / 100; ;
    return prix_apr_solde;
}
