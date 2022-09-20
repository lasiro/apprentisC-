#include "de_truquer.h"
de_truquer::de_truquer(int v):valeur(v){

};
int de_truquer::lancer(){
    // rappel de la fonction mere
    int res=de::lancer();
    
    return res>=3?res:valeur;
};