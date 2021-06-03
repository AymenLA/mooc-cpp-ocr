#ifndef _CLASS_PERSONNAGE_HPP_
#define _CLASS_PERSONNAGE_HPP_
/**
 * @file class_Personnage.hpp
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

#include <class_Arme.hpp>

/* Public defines ------------------------------------------------------------*/

/* Public declarations -------------------------------------------------------*/

/* Public enums --------------------------------------------------------------*/

/* Public structures ---------------------------------------------------------*/

/* Public typedefs -----------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/
class Personnage
{
    public:
    Personnage();
    Personnage(std::string nom, std::uint32_t vie, Arme arme);

    ~Personnage();

    private:

    std::string m_nom;
    Arme m_Arme;
    std::uint32_t m_vie;
};


#endif /* _CLASS_PERSONNAGE_HPP_ */