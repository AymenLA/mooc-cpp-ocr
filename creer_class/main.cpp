#include <iostream>
#include <string>

#include "Personnage.h"

using namespace std;



int main()
{
    Personnage  david, goliath;

    goliath.attaquer(david);

    david.boirePotionDeVie(20);

    goliath.attaquer(david);

    david.attaquer(goliath);

    goliath.changerArme("Double hache de la mort qui tue", 40);

    goliath.attaquer(david);

    return 0;
}
