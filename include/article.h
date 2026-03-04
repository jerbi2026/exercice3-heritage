#include<string>
#include <iostream>
#ifndef ARTICLE_H
#define ARTICLE_H

using namespace std;


class article
{
    public:
        article();
        article(string nom, float prix);
        virtual ~article();
        string get_nom();
        float get_prix();
        void set_nom(string nv_nom);
        void set_prix(float nv_prix);
        friend ostream& operator<<(ostream& sortie, const article& a)
        {
            sortie << "le nom : "<<a.nom << " | prix :  " << a.prix << endl;
            return sortie;
        }


    protected:
        string nom;
        float prix;

    private:

};

#endif // ARTICLE_H
