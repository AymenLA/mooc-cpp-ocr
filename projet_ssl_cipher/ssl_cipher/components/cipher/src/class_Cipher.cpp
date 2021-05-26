/**
 * @file class_Cipher.cpp
 * @brief 
 *
 * @copyright
 */
/* Includes ------------------------------------------------------------------*/
#include <iostream>
#include <cstdint>

#include <application_ecode.hpp>

#include <class_Cipher.hpp>


/* Private defines -----------------------------------------------------------*/

/* Private declarations ------------------------------------------------------*/

/* Private enums -------------------------------------------------------------*/

/* Private structures --------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/

Cipher::Cipher()
{}

Cipher::Cipher(std::string Message, std::int32_t CipherStatus, bool IsCiphered):
mMessage(Message), mCipherStatus(CipherStatus), mIsCiphered(IsCiphered)
{}

Cipher::~Cipher()
{}

AppEcode_e Cipher::CipherMessage(std::string InputMessage, std::string CipheredMessage)
{
    AppEcode_e retval = AppEcode_e::APP_ECODE_OK;

    return retval;
}

AppEcode_e Cipher::DecipherMessage(std::string InputMessage, std::string DecipheredMessage)
{
    AppEcode_e retval = AppEcode_e::APP_ECODE_OK;

    return retval;
}

AppEcode_e Cipher::SigneMessage(std::string InputMessage, std::string SignedMessage)
{
    AppEcode_e retval = AppEcode_e::APP_ECODE_OK;

    return retval;
}

AppEcode_e Cipher::VerifieMessage(std::string InputMessage, bool IsAuthencated)
{
    AppEcode_e retval = AppEcode_e::APP_ECODE_OK;

    return retval;
}