#include "de_truquer.h"
#include <iostream>
de_truquer::de_truquer(int v):valeur(v){

};
int de_truquer::lancer(){
    // rappel de la fonction mere
    int res=de::lancer();
    
    return res>=3?res:valeur;
}
de_truquer::~de_truquer(){
    std::cout<<"destruction du de_truquer";
}
