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
    m_numerateur = numerateur;
    if(0 != denominateur)
    {
        m_denominateur = denominateur;
    }
    else
    {
        m_denominateur = 1;
    }

};

ZFraction::ZFraction()
{
    m_numerateur = 0;
    m_denominateur = 1;
};

ZFraction::~ZFraction()
{
    
};

std::int32_t ZFraction::DenominateurCommun(std::int32_t numerateur, std::int32_t denominateur)
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