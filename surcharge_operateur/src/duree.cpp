#include <iostream>
#include <string>

#include "duree.hpp"

using namespace std;

Duree::Duree(int heures, int minutes, int secondes): m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
    // si un attribute est négatif
    if(m_heures < 0)   m_heures = 0;
    if(m_minutes < 0)  m_minutes = 0;
    if(m_secondes < 0) m_secondes = 0;

    // si les secondes sont suppérieurs a 59
    while(m_secondes >= 60)
    {
        m_minutes++;
        m_secondes -= 60;
    };

    // si les minutes son suppérieurs a 59
    while(m_minutes >= 60)
    {
        m_heures++;
        m_minutes -= 60;
    };
}

Duree::Duree(int minutes, int secondes): m_minutes(minutes), m_secondes(secondes)
{
    // si un attribute est négatif
    m_heures = 0;
    if(m_minutes < 0)  m_minutes = 0;
    if(m_secondes < 0) m_secondes = 0;

    // si les secondes sont suppérieurs a 59
    while(m_secondes >= 60)
    {
        m_minutes++;
        m_secondes -= 60;
    };

    // si les minutes son suppérieurs a 59
    while(m_minutes >= 60)
    {
        m_heures++;
        m_minutes -= 60;
    };
}

Duree::Duree(int secondes): m_secondes(secondes)
{
    // si un attribute est négatif
    m_heures = 0;
    m_minutes = 0;
    if(m_secondes < 0) m_secondes = 0;

    // si les secondes sont suppérieurs a 59
    while(m_secondes >= 60)
    {
        m_minutes++;
        m_secondes -= 60;
    };

    // si les minutes son suppérieurs a 59
    while(m_minutes >= 60)
    {
        m_heures++;
        m_minutes -= 60;
    };
}

Duree::Duree()
{
    // si un attribute est négatif
    m_heures = 0;
    m_minutes = 0;
    m_secondes = 0;
}

void Duree::Affichage() const
{
    cout << m_heures << "h" << m_minutes << "m" << m_secondes << "s" << endl;
}

int Duree::getHeures() const
{
    return m_heures;
}

int Duree::getMinutes() const
{
    return m_minutes;
}

int Duree::getSecondes() const
{
    return m_secondes;
}

bool Duree::estEgale(Duree const& b) const
{
    return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);
}

bool Duree::estPlusPetitQue(Duree const &b) const
{
    int secondes_a = 0, secondes_b = 0;

    secondes_a = (m_heures * 3600) + (m_minutes * 60) + (m_secondes);
    secondes_b = (b.m_heures * 3600) + (b.m_minutes * 60) + (b.m_secondes);

    if(secondes_a < secondes_b)
    {
        cout << "class::Duree::debug : " << secondes_a << " < " << secondes_b << endl;
        return true;
    }
    else
    {
        cout << "class::Duree::debug : " << secondes_a << " > " << secondes_b << endl;
        return false;
    }
}

bool Duree::estPlusGrandQue(Duree const &b) const
{
    int secondes_a = 0, secondes_b = 0;

    secondes_a = (m_heures * 3600) + (m_minutes * 60) + (m_secondes);
    secondes_b = (b.m_heures * 3600) + (b.m_minutes * 60) + (b.m_secondes);

    if(secondes_a > secondes_b)
    {
        cout << "class::Duree::debug : " << secondes_a << " > " << secondes_b << endl;
        return true;
    }
    else
    {
        cout << "class::Duree::debug : " << secondes_a << " < " << secondes_b << endl;
        return false;
    }
}

Duree &Duree::operator+=(Duree const &a)
{
#if 0
    int enSecondes = 0;

    // transformation en secondes
    enSecondes = a.m_heures * 3600 + a.m_minutes * 60 + a.m_secondes;

    // additions
    enSecondes += enSecondes;

    // retransformation en h,m,s
    while(enSecondes >= 3600)
    {
        m_heures++;
        enSecondes -= 3600;
    }

    while(enSecondes >= 60)
    {
        m_minutes++;
        enSecondes -= 60;
    }

    m_secondes = enSecondes;
#else
    m_secondes += a.m_secondes;

    m_minutes += m_secondes / 60;
    m_secondes = m_secondes % 60;

    m_minutes += a.m_minutes;

    m_heures += m_minutes / 60;
    m_minutes = m_minutes % 60;

    m_heures += a.m_heures;
#endif

    return *this;
}

Duree::~Duree()
{

}

bool operator==(Duree const &a, Duree const &b)
{
    return a.estEgale(b);
}

bool operator!=(Duree const &a, Duree const &b)
{
    if(a.estEgale(b))
        return false;
    else
        return true;
}

bool operator<(Duree const &a, Duree const &b)
{
    return a.estPlusPetitQue(b);
}

bool operator>(Duree const &a, Duree const &b)
{
    return a.estPlusGrandQue(b);
}

bool operator<=(Duree const &a, Duree const &b)
{
    return (a.estPlusPetitQue(b) || a.estEgale(b));
}

bool operator>=(Duree const &a, Duree const &b)
{
    return (a.estPlusGrandQue(b) || a.estEgale(b));
}

Duree operator+(Duree const &a, Duree const &b)
{
    Duree copie(a);

    copie += b;

    return copie;
}