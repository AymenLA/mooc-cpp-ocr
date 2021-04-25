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
    std::cout << "temps_0 :" << std::endl;
    temps_0.AfficherDuree();
    std::cout << "temps_1 :" << std::endl;
    temps_1.AfficherDuree();
    std::cout << "temps_2 :" << std::endl;
    temps_2.AfficherDuree();
    std::cout << "temps_3 :" << std::endl;
    temps_3.AfficherDuree();
    std::cout << "temps_4 :" << std::endl;
    temps_4.AfficherDuree();

    // using Operators to compare objects
    if(temps_0 >= temps_2)
    {
        std::cout << "temps_0 >= temps_2 = vrai" << std::endl;
    }
    else
    {
        if(temps_0 <= temps_2)
        {
            std::cout << "temps_0 <= temps_2 = vrai" << std::endl; 
        }
        
    }

    if(temps_3 > temps_4)
    {
        std::cout << "temps_3 > temps_4 = vrai" << std::endl;
    }
    else
    {
        if(temps_3 < temps_4)
        {
            std::cout << "temps_3 < temps_4 = vrai" << std::endl; 
        }
        
    }

    // adding two objects :
    std::cout << "temps_2 = ";
    temps_2.AfficherDuree();
    std::cout << "+" << std::endl; 
    std::cout << "temps_4 = ";
    temps_4.AfficherDuree();
    std::cout << "=" << std::endl;

    temps_0 = temps_2 + temps_4;
    temps_0.AfficherDuree();
    
    return ret_value;
}
