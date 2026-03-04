#include "article.h"
#include <string>
#include <iostream>

using namespace std;

article::article()
{
    //ctor
}

article::~article()
{
    //dtor
}


article::article(string nom, float prix)
{
    this->nom = nom;
    this->prix = prix;
}

string article::get_nom(){
    return this->nom;
}

float article::get_prix(){
    return this->prix;
}


void article::set_nom(string nv_nom){
    this->nom = nv_nom;
}

void article::set_prix(float nv_prix){
    this->prix = nv_prix;
}




