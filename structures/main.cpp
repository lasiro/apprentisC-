# include <iostream>
#include "carrestruct.h"
enum nomMois{ jan, feb, mar, apr, may, jun, jul, aug, sept};
struct mois
{
    int nbrejours;
    nomMois nom;

};
using namespace std;
int main(int argc, char const *argv[])
{

    mois premierMois;
    premierMois.nom=jan;
    carrestruct obj;
    obj.cote=15;
   cout<<obj.surface()<<endl;
   cout<<premierMois.nom<<endl;
    return 0;
}

