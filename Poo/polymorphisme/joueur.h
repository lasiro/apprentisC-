#ifndef __JOUEUR__
#define __JOUEUR__

#include<iostream>
#include <string>
class de;
class joueur {
    std::string nom;
    int score;
    public:
    joueur(std::string);
    std::string get_nom();
    std::string get_susses_msg();
    std::string get_result_format_response();
    int get_score();
    int jouer(de&);
    static std::string get_equal_msg();

};
#endif