#ifndef _MYCLASS_HPP_
#define _MYCLASS_HPP_
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
class MyClass
{
    public:
    MyClass();
    MyClass(std::int32_t member);

    ~MyClass();

    private:

    std::int32_t m_member;
};


#endif /* _MYCLASS_HPP_ */