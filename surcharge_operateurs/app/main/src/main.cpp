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
#include "class_Duree.hpp"

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
    // using empty constructor
    Duree temps_0;
    // using three variables constructor
    Duree temps_1(0,0,0), temps_2(5,61,61);
    // using two variables constructor
    Duree temps_3(125,23);
    // using one variable constructor
    Duree temps_4(8955);

    // using methode AfficherDuree to print current Duree temps_x
    temps_0.AfficherDuree();
    temps_1.AfficherDuree();
    temps_2.AfficherDuree();
    temps_3.AfficherDuree();
    temps_4.AfficherDuree();

    return ret_value;
}
