
#include "personne.h"
#include "developpeur.h"
int main(){
    personne ps1{"jasmir"};
    std::cout<<ps1.affiche()<<"\n"<<"**************************************"<<std::endl;
    developpeur dev1{"job"};
    dev1.set_langage("java");
    std::cout<<dev1.affiche()<<"\n"<<"**************************************"<<std::endl;

    developpeur dev2{"joel","C++"};
    std::cout<<dev2.affiche()<<"\n"<<"**************************************"<<std::endl;
    
    developpeur dev3;
    std::cout<<dev3.affiche()<<"\n"<<"**************************************"<<std::endl;
    
    developpeur* devf= new developpeur {"autre","bizzare"};
    std::cout<<devf->affiche()<<"\n"<<"**************************************"<<std::endl;
    delete devf;
    return 0;
}