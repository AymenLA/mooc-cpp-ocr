#ifndef _PERSONNAGE_H_
#define _PERSONNAGE_H_

#include <string>

#include "Arm.h"

class Personnage
{
    public:

    Personnage(std::string nomPersonnage, std::string nomArme, int degatsArme);
    Personnage(std::string nomPersonnage);
    Personnage();
    std::string nomPersonnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    void afficherEtat() const;
    bool estVivant() const;
    ~Personnage();

    private:

    std::string m_nomPersonnage;
    int m_vie;
    int m_mana;
    Arme m_arme;
};

#endif // _PERSONNAGE_H_
