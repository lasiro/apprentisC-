    //personne.cpp
    #include "Personne.h"
    #include "../voiture/Voiture.h"
    int Personne::compteur=0;
    //semantique d'initialisation ZIM
    Personne::Personne(std::string nom, std::string age):nom(nom),age(age){
         
        Personne::incremente_compteur();
        std::cout<<"creation Objet Personne: "<<get_compteur()<<", nom:"<<this->nom<<", age:"<<this->age<<std::endl;

    };
    Personne::Personne(std::string nom):nom(nom),age("inconu"){
        Personne::incremente_compteur();
        std::cout<<"creation Objet Personne: "<<get_compteur()<<", nom:"<<this->nom<<", age:"<<this->age<<std::endl;
    };
    //sementique d'affectation
   /* Personne::Personne(std::string nom, std::string age){
         this->nom=nom;
        this->age=age; 
        Personne::incremente_compteur();
        std::cout<<"creation Objet Personne: "<<get_compteur()<<", nom:"<<this->nom<<", age:"<<this->age<<std::endl;

    };
    Personne::Personne(std::string nom){
        this->nom=nom;
        this->age="inconu";
        Personne::incremente_compteur();
        std::cout<<"creation Objet Personne: "<<get_compteur()<<", nom:"<<this->nom<<", age:"<<this->age<<std::endl;
    }; */

    void Personne::achete(Voiture& voiture ){
        this->la_voiture=&voiture;
        voiture.set_proprio(this);

    };
    void Personne::set_nom(std::string name){
        nom=name;
    };
    std::string Personne::get_nom(){
        return nom;
    };
    int Personne::get_compteur(){
       return compteur;
    };
     int Personne::incremente_compteur(){
       return compteur+=1;
    };
    void Personne::print_compteur(){
        std::cout<<"nombre  de personne: "<<get_compteur()<<std::endl;
    };
    
 