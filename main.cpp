#include <iostream>
#include <string>
#include "article.h"
#include "solde.h"

using namespace std;

int main()
{

    article a("produit A",20.0);
    cout<<a;
    a.set_nom("Produit B");
    a.set_prix(25);
    cout<<a.get_nom()<<endl;
    cout<<a.get_prix()<<endl;

    solde prodt_rem("Produit C",100,20);
    cout<<prodt_rem;
    cout<<"Apres remise "<<prodt_rem.get_prix()<<endl;
    cout<<"Avant remise "<<prodt_rem.article::get_prix();

    return 0;
}
