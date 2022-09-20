#ifndef __PER__
#define __PER__

#include <iostream>
#include <string>
class personne{
    std::string nom;
    public:
    personne(std::string n);

    std::string get_nom();
    void set_nom(std::string);
    std::string affiche();
    ~personne();
};
#endif


