#ifndef _CLASS_INPUT_LOGIC_HPP_
#define _CLASS_INPUT_LOGIC_HPP_
/**
 * @file class_InputLogic.hpp
 * @brief 
 * @note 
 *
 * @copyright
 *
 */

/* Includes ------------------------------------------------------------------*/
#include <iostream>
#include <cstdint>

#include <application_ecode.hpp>

/* Public defines ------------------------------------------------------------*/

/* Public declarations -------------------------------------------------------*/

/* Public enums class --------------------------------------------------------*/
class InputLogic {

    public:
    InputLogic();
    ~InputLogic();

    private:
    std::string mMessage ;
    std::int32_t mCurrentMenuChoice;
    bool mIsValidChoice;
};

/* Public structures ---------------------------------------------------------*/

/* Public typedefs -----------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/


#endif /* _CLASS_INPUT_LOGIC_HPP_ */