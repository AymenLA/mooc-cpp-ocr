#include <iostream>
#include <inttypes.h>
#include <ctime>
#include <cstdlib>


using namespace std;

int main()
{
    string motMystere("");
    string motMystereu("");
    string motEntree("");
    string motRandom("");

    uint8_t trouve = 0;
    uint32_t nbAleatoire = 0;

    srand(time(0));


    //1 : lecture du mot mystere
    cout << "Saisissez un mot :" << endl;
    cin >> motMystere;

    motMystereu = motMystere;
    //2 : on melange les letters
    while(motMystereu.size())
    {
        nbAleatoire = rand() % motMystereu.size();

        motRandom += motMystereu[nbAleatoire];
        motMystereu.erase(nbAleatoire, 1);
    }

    //3 : on tente de deviner
    while(trouve == 0)
    {
        cout << motRandom << endl;
        cout << "Quel est le mot ?" << endl;
        cin >> motEntree;

        if(motMystere.compare(motEntree) != 0)
        {
            cout << "Ce n'est pas le mot !" << endl;
        }
        else
        {
            trouve = 1;
            cout << "Bravo !" << endl;
        }

    }

    return 0;
}
