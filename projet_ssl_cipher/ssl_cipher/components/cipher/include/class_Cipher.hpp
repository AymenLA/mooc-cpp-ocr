#ifndef _CLASS_CIPHER_HPP_
#define _CLASS_CIPHER_HPP_
/**
 * @file class_Cipher.hpp
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

#include <openssl/sha.h>
#include <openssl/rsa.h>
#include <openssl/ecdsa.h>
#include <openssl/x509.h>

/* Public defines ------------------------------------------------------------*/

/* Public declarations -------------------------------------------------------*/

/* Public enums class --------------------------------------------------------*/
// encapsulation of openssl RSA-2048 and AES-128-CBC

class Cipher {

    public:
    Cipher();
    Cipher(std::string Message, std::int32_t CipherStatus, bool IsCiphered);

    ~Cipher();

    AppEcode_e CipherMessage(std::string InputMessage, std::string CipheredMessage);

    AppEcode_e DecipherMessage(std::string InputMessage, std::string DecipheredMessage);

    AppEcode_e SigneMessage(std::string InputMessage, std::string SignedMessage);

    AppEcode_e VerifieMessage(std::string InputMessage, bool IsAuthencated);

    private:
    std::string mMessage ;
    std::int32_t mCipherStatus;
    bool mIsCiphered;
};

/* Public structures ---------------------------------------------------------*/

/* Public typedefs -----------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/


#endif /* _CLASS_CIPHER_HPP_ */