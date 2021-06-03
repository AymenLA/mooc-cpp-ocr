/**
 * @file class_Arme.cpp
 * @brief 
 *
 * @copyright
 */
/* Includes ------------------------------------------------------------------*/
#include <iostream>
#include <string>
#include <cstdint>

#include "class_Arme.hpp"
/* Private defines -----------------------------------------------------------*/

/* Private declarations ------------------------------------------------------*/

/* Private enums -------------------------------------------------------------*/

/* Private structures --------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/

Arme::Arme()
{
    m_nom = "baton";
    m_degat = 5;
    m_deterioration = 0;
    m_coup_fatal = false;
};

Arme::Arme(std::string nom, std::uint32_t degat, std::uint32_t deterioration): m_nom(nom), m_deterioration(deterioration), m_degat(degat)
{
    m_coup_fatal = false;
};

Arme::Arme(std::string nom, std::uint32_t degat, bool fatalite, std::uint32_t deterioration): m_nom(nom), m_deterioration(deterioration), m_degat(degat), m_coup_fatal(fatalite)
{

};

Arme::~Arme()
{
    
};
