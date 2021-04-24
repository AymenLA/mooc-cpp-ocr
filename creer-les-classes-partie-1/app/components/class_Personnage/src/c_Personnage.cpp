/**
 * @file c_Personnage.cpp
 * @brief 
 *
 * @copyright
 */
/* Includes ------------------------------------------------------------------*/
#include <iostream>
#include <cstdint>
#include <string>

#include "c_Personnage.hpp"
#include "application_ecode.h"
/* Private defines -----------------------------------------------------------*/

/* Private declarations ------------------------------------------------------*/

/* Private enums -------------------------------------------------------------*/

/* Private structures --------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/

void c_Personnage::recevoirDegats(std::int32_t nbDegats)
{
    m_vie -= nbDegats;

    if(m_vie < 0)
    {
        m_vie = 0;
    }
}

void c_Personnage::attaquer(c_Personnage &cible)
{
    cible.recevoirDegats(m_arme.getDegatsArme());
}

void c_Personnage::boirePotionDeVie(std::int32_t quantitePotion)
{
    m_vie += quantitePotion;

    if(m_vie > 100)
    {
        m_vie = 100;
    }
}

void c_Personnage::changerArme(std::string nomNouvelleArme, std::int32_t degatsNouvelleArme)
{
    m_arme.changerArme(nomNouvelleArme, degatsNouvelleArme);
}

bool c_Personnage::estVivant(void)
{
    if(m_vie > 0)
    {
        return true;
    }
    return false;
}

void c_Personnage::afficherEtat(void) const
{
    std::cout << "Nom : " << m_nomPersonnage << std::endl;
    std::cout << "Vie : " << m_vie << std::endl;
    std::cout << "Mana : " << m_mana << std::endl;
    m_arme.afficherArme();
}

c_Personnage::c_Personnage():m_nomPersonnage("Personnage"),m_vie(100), m_mana(100), m_arme("Épée rouillée", 100)
{

}

c_Personnage::c_Personnage(std::string nomPersonnage):m_nomPersonnage(nomPersonnage),m_vie(100), m_mana(100), m_arme("Épée rouillée", 100)
{

}

c_Personnage::c_Personnage(std::string nomPersonnage, std::string nomArme, std::int32_t degatsArme):m_nomPersonnage(nomPersonnage), m_vie(100), m_mana(100), m_arme(nomArme,degatsArme)
{

}

c_Personnage::~c_Personnage()
{
}
