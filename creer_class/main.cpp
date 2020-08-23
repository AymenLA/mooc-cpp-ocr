#include <iostream>
#include <string>

#include "Personnage.h"

using namespace std;



int main()
{
    Personnage  david("David"), goliath("Goliath","Super Epée en feu", 30);

    goliath.attaquer(david);

    david.boirePotionDeVie(20);

    goliath.attaquer(david);

    david.attaquer(goliath);

    goliath.changerArme("Double hache de la mort qui tue", 40);

    goliath.attaquer(david);


    cout << "David" << endl;

    david.afficherEtat();

    cout << endl << "Goliath" << endl;

    goliath.afficherEtat();


    return 0;
}
