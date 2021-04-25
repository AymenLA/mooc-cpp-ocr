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

    /**
     * @brief Constructor of class Duree
     * 
     * @param[in] heure hours count
     * @param[in] minute minutes count
     * @param[in] seconde seconds count
     * 
     */ 
    Duree(std::uint32_t heure , std::uint32_t minute, std::uint32_t seconde);

    /**
     * @brief Constructor of class Duree
     * 
     * @param[in] minute minutes count
     * @param[in] seconde seconds count
     * 
     */ 
    Duree(std::uint32_t minute, std::uint32_t seconde);

    /**
     * @brief Constructor of class Duree
     * 
     * @param[in] seconde seconds count
     * 
     */ 
    Duree(std::uint32_t seconde);

    /**
     * @brief Constructor of class Duree
     * 
     */ 
    Duree(void);

    ~Duree();

    private:
    std::uint32_t m_heure;
    std::uint32_t m_minute;
    std::uint32_t m_seconde;
};

#endif /* _CLASS_DUREE_HPP_ */