#include "joueur.h"
#include <string>
#include "de.h"
joueur::joueur(std::string n):nom(n),score(0){
    std::cout<<"creation du joueur "<<this->get_nom()<<std::endl;
}
int joueur::jouer(de& d){
    int valeur=d.lancer();
    score =valeur;
    return score;
}

    std::string joueur::get_nom(){return nom;}
    std::string joueur::get_susses_msg(){
        return this->get_nom()+" gagne!!!";

    }
     std::string joueur::get_equal_msg(){
        return " les equipes sont à égalité !!!";
     };

    std::string joueur::get_result_format_response(){
        std::string resultFormat=this->get_nom()+" fait "+std::to_string(this->get_score());
        return resultFormat;
    }
    int joueur::get_score(){
        return this->score;
    }