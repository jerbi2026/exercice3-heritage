#include<string>
#include <iostream>
#include "article.h"
#ifndef SOLDE_H
#define SOLDE_H

using namespace std;

class solde: public article
{
    public:
        solde();
        virtual ~solde();
        solde(string nom,float prix , int remise);
        float get_prix();
        friend ostream& operator<<(ostream& sortie, const solde& s)
        {
            float prix_apr_solde =  s.prix - (s.prix * s.remise / 100);
            sortie << "le nom : "<<s.nom << " | prix avant solde :  " << s.prix << " | prix apres solde :  " << prix_apr_solde << endl;
            return sortie;
        }


    protected:

    private:
        int remise;

};

#endif // SOLDE_H
