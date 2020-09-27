#include <iostream>

#include "duree.hpp"

using namespace std;

int main()
{
    // declaration des objets
    Duree chrono1(1,45, 50), chrono2(1, 15, 50), chrono3(12,55,10), chrono4(-2, -1, 22), chrono5(24,72), chrono6(2, 5, 22), chrono7(1,2), chrono8(1,3), chrono9(62), chrono10;

    // tests des objets
    cout << "chrono 1: " << endl;
    chrono1.Affichage();
    cout << endl << "chrono 2: " << endl;
    chrono2.Affichage();
    cout << endl << "chrono 3: " << endl;
    chrono3.Affichage();
    cout << endl << "chrono 4: " << endl;
    chrono4.Affichage();
    cout << endl << "chrono 5: " << endl;
    chrono5.Affichage();
    cout << endl << "chrono 6: " << endl;
    chrono6.Affichage();
    cout << endl << "chrono 7: " << endl;
    chrono7.Affichage();
    cout << endl << "chrono 8: " << endl;
    chrono8.Affichage();
    cout << endl << "chrono 9: " << endl;
    chrono9.Affichage();

    // test des opérateurs
    cout << endl << "test egalité" << endl;
    if(chrono1 == chrono5)
        cout << "les chronos 1 et 5 sont egaux" << endl;
    else
        cout << "les chronos 1 et 5 sont différents" << endl;

    cout << endl << "test différence" << endl;
    if(chrono1 != chrono5)
        cout << "les chronos 1 et 5 sont différents" << endl;
    else
        cout << "les chronos 1 et 5 sont egaux" << endl;

    cout << endl << "tests plus petit" << endl;
    if(chrono1 < chrono2)
        cout << "chrono 1 plus petit que 2" << endl;
    else
        cout << "chrono 1 n'est pas plus petit que 2 " << endl;

    cout << endl << "tests plus grand" << endl;
    if(chrono6 > chrono1)
        cout << "chrono 6 plus grand que 2" << endl;
    else
        cout << "chrono 6 n'est pas plus grand que 2" << endl;

    cout << endl << "tests plus petit ou egale" << endl;
    if(chrono7 <= chrono9)
        cout << "chrono 7 plus petit ou egale a 9" << endl;
    else
        cout << "chrono 7 n'est pas plus petit ou egale a 9" << endl;

    cout << endl << "tests plus grand ou egale" << endl;
    if(chrono7 >= chrono9)
        cout << "chrono 7 plus grand ou egale a 9" << endl;
    else
        cout << "chrono 7 n'est pas plus grand ou egale a 9" << endl;

    cout << endl << "tests chrono 1 + 2" << endl;

    chrono1 += chrono2;
    cout << endl << "chrono 1: " << endl;
    chrono1.Affichage();

    cout << endl << "tests chrono10 = 3 + 4 + 5" << endl;

    chrono10 = chrono3 + chrono4 + chrono5;
    cout << endl << "chrono 10: " << endl;
    chrono10.Affichage();
    return 0;
}