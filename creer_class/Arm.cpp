#include <iostream>
#include <string>

#include "Arm.h"

using namespace std;


Arme::Arme(): m_nom("Epée rouillée"), m_degats(10)
{

}

Arme::Arme(string nom, int degats): m_nom(nom), m_degats(degats)
{

}

Arme::~Arme()
{

}

void Arme::changer(string nom, int  degats)
{
    m_nom = nom;
    m_degats = degats;
}

int Arme::getDegats() const
{
    return m_degats;
}

string Arme::getNom() const
{
    return m_nom;
}

void Arme::afficher() const
{
    cout << "Arme : " << m_nom << " Dégats : " << m_degats << endl;
}
