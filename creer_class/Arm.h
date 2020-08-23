#ifndef ARM_H_
#define ARM_H_

#include <iostream>
#include <string>

class Arme
{
    public:

    Arme();
    Arme(std::string nom, int degats);
    void changer(std::string nom, int degats);
    void afficher() const;
    int getDegats() const;
    std::string getNom() const;
    ~Arme();

    private:

    int m_degats;
    std::string m_nom;
};


#endif // ARM_H_INCLUDED
