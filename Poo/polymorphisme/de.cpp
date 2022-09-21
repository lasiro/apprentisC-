#include "de.h"
#include<random>
std::uniform_int_distribution<int> dist(1,7);
std::default_random_engine gen;
int de::lancer(){
    return dist(gen);
}
de::~de(){
    std::cout<<"destruction du de";
}