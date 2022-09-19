//voiture.h
#include <iostream>
//#include "Personne.h"
class Personne;
#ifndef __VOITURE__
#define __VOITURE__
class Voiture{
    Personne* le_proprio;
    public:
    void affiche_proprio();
    void set_proprio(Personne*);

};
#endif