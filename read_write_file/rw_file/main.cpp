#include <iostream>
#include <fstream>
#include <inttypes.h>

using namespace std;

string const mywFile = "../file_1";
string const myrFile = "../file_1";

int main()
{
    // créer l'objet myStream
    ofstream mywStream(mywFile.c_str());
    ifstream myrStream(myrFile.c_str());

    // ce cours est disponible ici :
    cout << "https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1896398-lisez-et-modifiez-des-fichiers" << endl;

    // on test le ofstream
    if(mywStream)
    {
        // message de debug
        cout << "MywStream: open in write mode\"" << mywFile.c_str() << "\" OK." << endl;

        // on ecrit dans le fichier myStream
        mywStream << "Hi! I'm a line on a stream file" << endl;
        mywStream << "Here, take a look at this float value: " << 3.1415 << endl;

        uint32_t    lines = 3;

        mywStream << "this file has " << lines << " lines " << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }

    mywStream.close();

    // on test le ofstream
    if(myrStream)
    {
        // message de debug
        cout << "MyrStream: open in read mode\"" << myrFile.c_str() << "\" OK." << endl;

        // on declare une ligne
        string myLine;

        // on lit le fichier entier
        while(getline(myrStream, myLine))
        {
            // on affiche la ligne
            cout << "MyrStream: ligne : \"" << myLine << "\"" << endl;
        }

    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}
