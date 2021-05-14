/**
 * @file ZFraction.cpp
 * @brief 
 *
 * @copyright
 */
/* Includes ------------------------------------------------------------------*/
#include <iostream>
#include <cstdint>

#include "class_ZFraction.hpp"
/* Private defines -----------------------------------------------------------*/

/* Private declarations ------------------------------------------------------*/

/* Private enums -------------------------------------------------------------*/

/* Private structures --------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/

ZFraction::ZFraction(std::int32_t numerateur)
{
    m_numerateur = numerateur;
    m_denominateur = 1;
};

ZFraction::ZFraction(std::int32_t numerateur, std::int32_t denominateur): m_numerateur(numerateur), m_denominateur(1)
{
    std::int32_t pgcd = 1;
    m_numerateur = numerateur;

    /* denominator should always be different of 0 */
    if(0 != denominateur)
    {
        m_denominateur = denominateur;
    }
    else
    {
        m_denominateur = 1;
    }

    /* determin pgcd and apply its value to the fraction */
    pgcd = DenominateurCommun(m_numerateur, m_denominateur);
    m_numerateur = m_numerateur / pgcd;
    m_denominateur = m_denominateur / pgcd;
};

ZFraction::ZFraction()
{
    m_numerateur = 0;
    m_denominateur = 1;
};

ZFraction::~ZFraction()
{
    
};

std::int32_t DenominateurCommun(std::int32_t numerateur, std::int32_t denominateur)
{
    std::int32_t count_devide = 1;
    std::int32_t biggest_devidor = 1;

    /* factorize the value */
    while(((count_devide <= numerateur) || (count_devide <= denominateur)))
    {
        if((numerateur % count_devide) == 0 
       && (denominateur % count_devide) == 0)
       {
            biggest_devidor = count_devide;
       }
       count_devide++;
    }

    return biggest_devidor;
}

void ZFraction::Afficher(std::ostream& flux) const
{
    if(m_denominateur == 1)
    {
        flux << m_numerateur << '\n';
    }
    else
    {
        flux << m_numerateur << '/' << m_denominateur << '\n';
    }
}

std::ostream& operator<<(std::ostream& flux, ZFraction const& fraction)
{
    fraction.Afficher(flux);
    return flux;
}