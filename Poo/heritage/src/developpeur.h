#ifndef __DEV__
#define __DEV__
#include <string>
#include "personne.h"
class developpeur:public personne{
    std::string langage;
    public:
    void set_langage(std::string );
    //constructeur à deux paramètres qvec valeur par defaut
    developpeur(std::string ="eliott", std::string ="python");
    std::string affiche();
   ~developpeur();
};
#endif