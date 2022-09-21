#include "complexe.h"
int main(){
    complexe c1 {1,5};
    c1.affiche();
    complexe c2 {2,3};
    c2.affiche();
    //operateur unaire fonction membre
    c1.operator+=(c2);
    c1.affiche();
    //operateur binaire fonction non membre
   // complexe c3 = operator+(c1,c2);
   // c3.affiche();

    //poste incrememtation
    complexe c3 {1,5};
    ++c3;
    c3.affiche();
    complexe c4= c3++;
    c4.affiche();
    int entier=c4 ;
}
complexe c6=3;