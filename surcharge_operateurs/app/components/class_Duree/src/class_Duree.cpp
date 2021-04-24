/**
 * @file class_Duree.cpp
 * @brief 
 * @note 
 *
 * @copyright
 *
 */

/* Includes ------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include <cstdint>

#include "class_Duree.hpp"

/* Private defines -----------------------------------------------------------*/

/* Private declarations ------------------------------------------------------*/

/* Private enums -------------------------------------------------------------*/

/* Private structures --------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/
Duree::Duree(std::uint32_t heure, std::uint32_t minute, std::uint32_t seconde) : 
m_heure(heure), m_minute(minute), m_seconde(seconde)
{

}

Duree::~Duree()
{

}


void Duree::AfficherDuree(void)
{
    std::cout.fill('0');
    std::cout << std::setw(2) << m_heure \
    << ":" << std::setw(2) << m_minute \
    << ":" << std::setw(2) << m_seconde \
    << std::endl;
}

