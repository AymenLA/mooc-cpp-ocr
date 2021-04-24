#ifndef _CLASS_DUREE_HPP_
#define _CLASS_DUREE_HPP_
/**
 * @file class_Duree.hpp
 * @brief 
 * @note 
 *
 * @copyright
 *
 */

/* Includes ------------------------------------------------------------------*/
#include <iostream>
#include <cstdint>

/* Public defines ------------------------------------------------------------*/

/* Public declarations -------------------------------------------------------*/

/* Public enums --------------------------------------------------------------*/


/* Public structures ---------------------------------------------------------*/

/* Public typedefs -----------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/

class Duree
{
    public:
    void AfficherDuree(void);

    Duree(std::uint32_t heure = 0, std::uint32_t minute = 0, std::uint32_t seconde = 0);
    ~Duree();

    private:
    std::uint32_t m_heure;
    std::uint32_t m_minute;
    std::uint32_t m_seconde;
};

#endif /* _CLASS_DUREE_HPP_ */