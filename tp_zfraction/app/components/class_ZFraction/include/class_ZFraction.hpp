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

    std::int32_t DenominateurCommun(std::int32_t numerateur, std::int32_t denominateur);

    ~ZFraction();

    private:

    std::int32_t m_numerateur;
    std::int32_t m_denominateur;
};

#endif /* _ZFRACTION_HPP_ */