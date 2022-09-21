#include "complexe.h"
#include <string>
complexe::complexe(int r):reel(r), img(0){

};
complexe::complexe(int r, int i):reel(r),img(i){

}
void complexe::affiche(){
    std::cout<<"["<<reel<<"i"<<img<<"]"<<std::endl;
}
complexe & complexe::operator+=(const complexe& d){
    reel+=d.reel;
    img+=d.img;
    return *this;
};
complexe::operator int(){
    return reel;
};
//prefix increment
 complexe& complexe::operator++(){
    ++reel;
    ++img;
    return *this;
 };
 //postfixe increment int pseudo parametre
  complexe complexe::operator++(int){
   complexe val=*this;
    reel++;
    img++;
    return val;
 };
//fonction nom membre
complexe operator+(const complexe&p, const complexe&d){
    complexe c= p;
    c+=d;
    return c;
};