#ifndef __DT__
#define __DT__

#include "de.h"
class de_truquer : public de{
int valeur; 

public:
de_truquer(int);
/* virtual */int lancer();
};
#endif