//personne.h
#include <iostream>
#include <string>
#ifndef __PERSONNE__
#define __PERSONNE__
class Voiture;
class Personne{

    static int compteur;
    std::string nom;
    std::string age;
    Voiture* la_voiture;
    public:
    Personne(std::string nom, std::string age);
    Personne(std::string);
    void achete(Voiture&);
    void set_nom(std::string);
    std::string get_nom();
    static int get_compteur();
    static int incremente_compteur();
    static void print_compteur();

};
#endif