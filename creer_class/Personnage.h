#ifndef _PERSONNAGE_H_
#define _PERSONNAGE_H_

#include <string>

class Personnage
{
    public:

    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();

    private:

    int m_vie;
    int m_mana;
    std::string m_nomArme;
    int m_degatsArme;
};

#endif // _PERSONNAGE_H_
