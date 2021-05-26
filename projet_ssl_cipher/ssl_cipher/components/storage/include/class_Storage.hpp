#ifndef _CLASS_STORAGE_HPP_
#define _CLASS_STORAGE_HPP_
/**
 * @file class_Storage.hpp
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
class Storage {

    public:
    Storage();
    ~Storage();

    private:
    std::int32_t mStorageSize ;
    std::int32_t mStorageLeft;
    std::int32_t mStorageUsed;
};

/* Public structures ---------------------------------------------------------*/

/* Public typedefs -----------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/


#endif /* _CLASS_SSTORAGE_HPP_ */