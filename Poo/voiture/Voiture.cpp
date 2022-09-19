//voiture.cpp
#include "../personne/Personne.h"
#include "Voiture.h"
void Voiture::affiche_proprio(){
    std::cout<< le_proprio->get_nom()<<std::endl;
};
void Voiture::set_proprio(Personne* personne){
    le_proprio=personne;

    };