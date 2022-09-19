#include<iostream>
using namespace std;
/* 

// déclaration d'une structure dans un name space
namespace strcture{
    struct carre{
    double cote;
    double calcul_surface();
};

}

//definition des membres de la structure
double strcture::carre::calcul_surface(){
    return cote*cote;
};

 
 //teste
int main(){
    strcture::carre mon_carre;
    mon_carre.cote=56;
    double s;
    s= mon_carre.calcul_surface();
    cout<<"surface= "<< s <<endl;
    } ; */

    // declaration d'une classe complexe.h


    // definition de la classe dans complexe.cpp

  
 #include "./personne/Personne.h"
 #include "./voiture/Voiture.h"
    //utilisation
//#include "complexe.h"
    int main(){
        /* complexe c1;
        c1.set_reel(9);
        c1.set_img(4);
        c1.print(); */
bool response=true;
Personne::print_compteur();

while (response){
    std::cout<<"voulez vous enregistrer une personne? O/N"<<std::endl;std::cin>>response;
    std::string nom="";
    std::string age="";
    std::cout<<"entrer un nom"<<std::endl;std::cin>>nom;
    std::cout<<"quel est l'age de "<< nom<<std::endl;std::cin>>age;
    Personne personne(nom,age);
    Personne::print_compteur();

}

/* Voiture voiture;
voiture.set_proprio(&personne);
personne.achete(voiture);
voiture.affiche_proprio(); */
       
        return 0;
    }