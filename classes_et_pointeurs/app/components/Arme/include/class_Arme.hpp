#ifndef _CLASS_ARME_HPP_
#define _CLASS_ARME_HPP_
/**
 * @file class_Arme.hpp
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

/* Public defines ------------------------------------------------------------*/

/* Public declarations -------------------------------------------------------*/

/* Public enums --------------------------------------------------------------*/

/* Public structures ---------------------------------------------------------*/

/* Public typedefs -----------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/
class Arme
{
    public:
    Arme();
    Arme(std::string nom, std::uint32_t degat, std::uint32_t deterioration);
    Arme(std::string nom, std::uint32_t degat, bool fatalite, std::uint32_t deterioration);

    ~Arme();

    private:

    // nom de l'arme utilisee
    std::string m_nom;

    // degat de l'arme utilisee
    std::uint32_t m_degat;

    // tirage au sort pour savoir si ca va etre un coup fatal ou non
    bool m_coup_fatal;

    // a chaque coups fatal porte, l'arme se deteriore de 1
    std::uint32_t m_deterioration;
};


#endif /* _CLASS_ARME_HPP_ */