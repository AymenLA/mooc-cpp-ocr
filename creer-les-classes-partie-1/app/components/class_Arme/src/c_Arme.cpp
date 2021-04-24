/**
 * @file c_Arme.cpp
 * @brief 
 *
 * @copyright
 */
/* Includes ------------------------------------------------------------------*/
#include <iostream>
#include <cstdint>
#include <string>

#include "c_Arme.hpp"
#include "application_ecode.h"

/* Private defines -----------------------------------------------------------*/

/* Private declarations ------------------------------------------------------*/

/* Private enums -------------------------------------------------------------*/

/* Private structures --------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/

c_Arme::c_Arme():m_nomArme("Épée rouillée"), m_degatsArme(100)
{
}

c_Arme::c_Arme(std::string nomArme, std::int32_t degatsArme):m_degatsArme(degatsArme),m_nomArme(nomArme)
{
}

void c_Arme::changerArme(std::string nomArme, std::int32_t degatsArme)
{
    m_degatsArme = degatsArme;

    m_nomArme = nomArme;
}

void c_Arme::afficherArme(void) const
{
    std::cout << "Arme : " << m_nomArme << "(Dégats : " << m_degatsArme << ")" << std::endl;
}

std::int32_t c_Arme::getDegatsArme(void) const
{
    return m_degatsArme;
}

c_Arme::~c_Arme()
{
}
