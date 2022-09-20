#include "developpeur.h"
developpeur::developpeur(std::string n, std::string l)
: personne(n),langage(l)
{};
void developpeur::set_langage(std::string l){
    langage=l;
}
std::string developpeur::affiche(){return "je suis "+get_nom()+" et je code"+langage+"\n";};
developpeur::~developpeur(){
    std::cout<<"destruction de developpeur qui code "<<langage<<"...OK"<<std::endl;
}