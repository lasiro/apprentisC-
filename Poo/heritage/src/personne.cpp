#include <iostream>
#include "personne.h"
personne::personne(std::string n):nom(n){
    std::cout<<"construction de Personne "<<nom<<"...ok"<<std::endl;

}

std::string personne::get_nom(){
    return nom;
}

 void personne::set_nom(std::string n){nom=n;};

std::string personne::affiche(){
    return "je suis "+nom;
}
personne::~personne(){
    std::cout<<"destruction de personne: "<<nom<<"...OK"<<std::endl;
}