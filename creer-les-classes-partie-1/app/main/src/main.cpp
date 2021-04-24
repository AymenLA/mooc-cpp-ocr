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
#include "c_Personnage.hpp"

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
    c_Personnage david("David"), goliath("Goliath", "Épée aiguisée", 20);

    david.afficherEtat();
    goliath.afficherEtat();

    goliath.attaquer(david);
    david.boirePotionDeVie(20);

    goliath.attaquer(david);
    david.attaquer(goliath);

    goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
    goliath.attaquer(david);

    david.afficherEtat();
    goliath.afficherEtat();

    return ret_value;
}
