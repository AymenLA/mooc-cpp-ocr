#ifndef _DUREE_H_
#define _DUREE_H_

#include <iostream>
#include <string>

class Duree
{

    public:
    Duree(int heures, int minutes, int secondes);
    Duree(int minutes, int secondes);
    Duree(int secondes);
    Duree();

    bool estEgale(Duree const &b) const;
    bool estPlusPetitQue(Duree const &b) const;
    bool estPlusGrandQue(Duree const &b) const;

    Duree &operator+=(Duree const &a);

    void Affichage() const;
    int getHeures() const;
    int getMinutes() const;
    int getSecondes() const;

    ~Duree();

    private:
    int m_heures;
    int m_minutes;
    int m_secondes;

};

// les opérateurs logiques
bool operator==(Duree const &a, Duree const &b);
bool operator!=(Duree const &a, Duree const &b);

bool operator<(Duree const &a, Duree const &b);
bool operator>(Duree const &a, Duree const &b);

bool operator<=(Duree const &a, Duree const &b);
bool operator>=(Duree const &a, Duree const &b);

// les opérateurs arithmetiques
Duree operator+(Duree const &a, Duree const &b);
Duree operator+=(Duree const &a, Duree const &b);

Duree operator-(Duree const &a, Duree const &b);
Duree operator-=(Duree const &a, Duree const &b);

Duree operator*(Duree const &a, Duree const &b);
Duree operator*=(Duree const &a, Duree const &b);

Duree operator/(Duree const &a, Duree const &b);
Duree operator/=(Duree const &a, Duree const &b);

Duree operator%(Duree const &a, Duree const &b);
Duree operator%=(Duree const &a, Duree const &b);
#endif // _DUREE_H_INCLUDED