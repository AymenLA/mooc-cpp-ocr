#ifndef _ZFRACTION_HPP_
#define _ZFRACTION_HPP_
/**
 * @file ZFraction.hpp
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
class ZFraction
{
    public:
    ZFraction();
    ZFraction(std::int32_t numerateur);
    ZFraction(std::int32_t numerateur, std::int32_t denominateur);

    ~ZFraction();

    void Afficher(std::ostream& flux) const ;

    private:

    std::int32_t m_numerateur;
    std::int32_t m_denominateur;
};

std::int32_t DenominateurCommun(std::int32_t numerateur, std::int32_t denominateur);
std::ostream& operator<<(std::ostream& flux, ZFraction const& fraction);

#endif /* _ZFRACTION_HPP_ */