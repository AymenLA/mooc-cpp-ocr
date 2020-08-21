#include <iostream>
#include <string>

using namespace std;

int main()
{
    string maChaine("Bonjour !");
    cout << maChaine << endl;

    maChaine = "Bien le bonjour !";
    cout << maChaine << endl;

    string chaine1("Bonjour !");
    string chaine2("Comment allez-vous ?");
    string chaine3;

    chaine3 = chaine1 + " " + chaine2; // 3... 2... 1... Concaténatioooooon
    cout << chaine3 << endl;

        if (chaine1 == chaine2) // Faux
    {
        cout << "Les chaines sont identiques." << endl;
    }
    else
    {
        cout << "Les chaines sont differentes." << endl;
    }

    return 0;
}
