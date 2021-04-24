#ifndef __C_ARME_HPP__
#define __C_ARME_HPP__
/**
 * @file c_Arme.hpp
 * @brief 
 * @note 
 *
 * @copyright
 *
 */

/* Includes ------------------------------------------------------------------*/
#include <string>
#include <cstdint>
#include <iostream>


/* Public defines ------------------------------------------------------------*/

/* Public declarations -------------------------------------------------------*/
class c_Arme
{
public:
    c_Arme();
    c_Arme(std::string nomArme, std::int32_t degatsArme);

    void changerArme(std::string nomArme, std::int32_t degatsArme);
    void afficherArme(void) const;
    std::int32_t getDegatsArme(void) const;
    ~c_Arme();
private:
    /* data */
    std::int32_t m_degatsArme;
    std::string m_nomArme;
};

/* Public enums --------------------------------------------------------------*/

/* Public structures ---------------------------------------------------------*/

/* Public typedefs -----------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/


#endif /* __C_ARME_HPP__ */