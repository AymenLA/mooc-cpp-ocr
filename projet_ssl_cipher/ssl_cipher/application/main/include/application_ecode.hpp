#ifndef _APPLICATION_ECODE_HPP_
#define _APPLICATION_ECODE_HPP_
/**
 * @file application_ecode.hpp
 * @brief 
 * @note 
 *
 * @copyright
 *
 */

/* Includes ------------------------------------------------------------------*/

/* Public defines ------------------------------------------------------------*/

/* Public declarations -------------------------------------------------------*/

/* Public enums class --------------------------------------------------------*/
enum class AppEcode_e {
    APP_ECODE_OK = 0,
    APP_ECODE_DEFAULT_VALUE,
    APP_ECODE_BAD_PARAMETER,
    APP_ECODE_UNKNOWN_ERROR,

    APP_ECODE_CIPHER_ERROR,

    APP_ECODE_INPUT_ERROR,

    APP_ECODE_STORAGE_ERROR,

    APP_ECODE_MAX_ERROR_VALUE
};

/* Public structures ---------------------------------------------------------*/

/* Public typedefs -----------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/


#endif /* _APPLICATION_ECODE_HPP_ */