#include <iostream>
#include <string>

#include "Personnage.h"

using namespace std;



int main()
{
    Personnage  paysan, david("David"), goliath("Goliath","Super Epée en feu", 30);

    goliath.attaquer(david);

    paysan.attaquer(goliath);

    david.boirePotionDeVie(20);

    paysan.attaquer(david);

    goliath.attaquer(david);

    paysan.attaquer(goliath);

    david.attaquer(goliath);

    paysan.attaquer(david);

    goliath.changerArme("Double hache de la mort qui tue", 40);

    goliath.attaquer(david);


    cout << "David" << endl;

    david.afficherEtat();

    cout << endl << "Goliath" << endl;

    goliath.afficherEtat();

    cout << endl << "paysan" << endl;

    paysan.afficherEtat();

    return 0;
}
