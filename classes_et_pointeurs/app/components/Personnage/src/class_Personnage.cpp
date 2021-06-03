/**
 * @file class_Personnage.cpp
 * @brief 
 *
 * @copyright
 */
/* Includes ------------------------------------------------------------------*/
#include <iostream>
#include <string>
#include <cstdint>

#include "class_Personnage.hpp"
/* Private defines -----------------------------------------------------------*/

/* Private declarations ------------------------------------------------------*/

/* Private enums -------------------------------------------------------------*/

/* Private structures --------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/

Personnage::Personnage()
{
    m_vie = 100;
    m_nom = "npc";
};

Personnage::Personnage(std::string nom, std::uint32_t vie, Arme arme): m_nom(nom), m_vie(vie), m_Arme(arme)
{

};

Personnage::~Personnage()
{
    
};
