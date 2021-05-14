/**
 * @file main.cpp
 * @brief 
 *
 * @copyright
 */
/* Includes ------------------------------------------------------------------*/
#include <iostream>
#include <cstdint>


#include "application_ecode.h"

#include "class_ZFraction.hpp"

using namespace std;
/* Private defines -----------------------------------------------------------*/

/* Private declarations ------------------------------------------------------*/

/* Private enums -------------------------------------------------------------*/

/* Private structures --------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/
int32_t main(int32_t argc, char ** argv)
{
    int32_t ret_value = APP_ECODE_OK;
    ZFraction a(3,5), b(2,1), c(8,10);

    cout << a;
    cout << b;
    cout << c;

    return ret_value;
}
