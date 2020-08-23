#include <iostream>
#include <string>
#include "Personnage.h"
#include "Arm.h"

using namespace std;


Personnage::Personnage(string nomPersonnage, string nomArme, int degatsArme): m_vie(100), m_mana(100), m_nomPersonnage(nomPersonnage), m_arme(nomArme, degatsArme)
{

}

Personnage::Personnage(string nomPersonnage): m_vie(100), m_mana(100), m_nomPersonnage(nomPersonnage), m_arme("Epée rouillée", 10)
{

}

Personnage::Personnage(): m_vie(100), m_mana(100), m_nomPersonnage("Paysant deter"), m_arme("Epée rouillée", 10)
{

}

Personnage::~Personnage()
{

}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie = m_vie - nbDegats;
    if(m_vie < 0)
    {
        m_vie = 0;
    }

    cout << m_nomPersonnage << " : reçu : " << nbDegats << " degats" << endl;
    cout << m_nomPersonnage << " : vie : " << m_vie << endl;
}
string Personnage::nomPersonnage()
{
    return m_nomPersonnage;
}

void Personnage::attaquer(Personnage &cible)
{
    cout << m_nomPersonnage <<  " : attaque : " << m_arme.getDegats() << " degats infligés à " << cible.nomPersonnage() << " avec l'arme " << m_arme.getNom() << endl;
    cible.recevoirDegats(m_arme.getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion)
{

    m_vie = m_vie + quantitePotion;
    if(m_vie > 100)
    {
        m_vie = 100;
    }

    cout << m_nomPersonnage << " : Bu : " << quantitePotion << " en potion" << endl;
    cout << m_nomPersonnage << " : nouvelle vie : " << m_vie << endl;
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
    m_arme.afficher();
}

void Personnage::afficherEtat() const
{
    cout << "vie : " << m_vie << endl;
    cout << "mana : " << m_mana << endl;
    m_arme.afficher();
}

bool Personnage::estVivant() const
{
    if(m_vie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
