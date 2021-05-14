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
    ZFraction a(63,87), b(2,1), c(8,10), somme, soustraction, produit, division;
    ZFraction d(3,15), e(9,45);

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    somme = a + c;
    soustraction = a - c;
    produit = a * c;
    division = a / c; 

    cout << a << " + " << c << " = " << somme  << endl;
    cout << a << " - " << c << " = " << soustraction  << endl;
    cout << a << " * " << c << " = " << produit  << endl;
    cout << a << " / " << c << " = " << division  << endl;


    cout << d << " + " << e << " = ?"  << endl;

    if(d != e)
    {
       cout << d << " différent de " << e << endl;
    }
    else
    {
       cout << d << " est égale à " << e << endl;
    };

    return ret_value;
}
