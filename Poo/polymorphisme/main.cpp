#include <iostream>
#include <ostream>
#include "joueur.h"
#include "de_truquer.h"

void lejeux_tricheur(){
        std::cout<<"teste"<<std::endl;
    de* le_de= new de();
    de* dt=new de_truquer{6};
    joueur j1{"messie"};
    joueur j2{"eliott"};
    for (int i=0; i<10;++i){
        int result_j1=j1.jouer(*le_de);
        std::cout<<j1.get_result_format_response()<<std::endl;
        int result_j2=j2.jouer(*dt);
        std::cout<<j2.get_result_format_response()<<std::endl;
        if(result_j1>result_j2){
            std::cout<<j1.get_susses_msg()<<std::endl;
        }
        else if(result_j1==result_j2){
            std::cout<<joueur::get_equal_msg()<<std::endl;
        }
        else {
             std::cout<<j2.get_susses_msg()<<std::endl;
        }

    }
    delete le_de;
    std::cout<<"\n----------------------------------------"<<std::endl;
    delete  dt;
    std::cout<<"\n----------------------------------------"<<std::endl;
std::cout<<&le_de<<&dt;
}


int main(){
    lejeux_tricheur();

}

