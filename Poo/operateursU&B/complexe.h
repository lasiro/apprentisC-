#ifndef __COMP__
#define __COMP__
#include <iostream>
#include <string>
class complexe{
    int reel;
    int img;
    public:
    complexe(int,int);
    complexe(int);
    void affiche();
    //surcharge de l'operateur += unaire
    complexe& operator+=(const complexe& );
    //surcharge operateur ++
    complexe& operator++();
    complexe operator++(int);
    explicit operator int();
};
//surcharge en utilisant un operateur binaire en fonction nom membre
complexe operator+(const complexe&, const complexe&);
#endif