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
    // perform a basic operation to avoid minutes and seconds from overflowing
    // above 59
    if(m_seconde > 60)
    {
       m_minute += m_seconde / 60;
       m_seconde = m_seconde % 60;
    }
    if(m_minute >= 60)
    {
        m_heure += m_minute / 60;
        m_minute = m_minute % 60;
    }
}

Duree::Duree(std::uint32_t minute, std::uint32_t seconde) : 
m_minute(minute), m_seconde(seconde)
{
    // force uninitialized members to a default value
    m_heure = 0;

    // perform a basic operation to avoid minutes and seconds from overflowing
    // above 59
    if(m_seconde > 60)
    {
       m_minute += m_seconde / 60;
       m_seconde = m_seconde % 60;
    }
    if(m_minute >= 60)
    {
        m_heure += m_minute / 60;
        m_minute = m_minute % 60;
    }
}

Duree::Duree(std::uint32_t seconde) : 
m_seconde(seconde)
{
    // force uninitialized members to a default value
    m_heure = 0;
    m_minute = 0;

    // perform a basic operation to avoid minutes and seconds from overflowing
    // above 59
    if(m_seconde > 60)
    {
       m_minute += m_seconde / 60;
       m_seconde = m_seconde % 60;
    }
    if(m_minute >= 60)
    {
        m_heure += m_minute / 60;
        m_minute = m_minute % 60;
    }
}

Duree::Duree(void)
{
    // force uninitialized members to a default value
    m_heure = 0;
    m_minute = 0;
    m_seconde = 0;
}

Duree::~Duree()
{

}


void Duree::AfficherDuree(void)
{
    // set default empty space to be filled with 0
    std::cout.fill('0');
    // print hours on 2 digits
    std::cout << std::setw(2) << m_heure \
    // print minutes on 2 digits
    << ":" << std::setw(2) << m_minute \
    // print seconds on 2 digits
    << ":" << std::setw(2) << m_seconde \
    << std::endl;
}

