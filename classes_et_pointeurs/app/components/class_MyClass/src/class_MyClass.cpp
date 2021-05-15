/**
 * @file class_MyClass.cpp
 * @brief 
 *
 * @copyright
 */
/* Includes ------------------------------------------------------------------*/
#include <iostream>
#include <cstdint>

#include "class_MyClass.hpp"
/* Private defines -----------------------------------------------------------*/

/* Private declarations ------------------------------------------------------*/

/* Private enums -------------------------------------------------------------*/

/* Private structures --------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/

MyClass::MyClass()
{
    m_member = 0;;
};

MyClass::MyClass(std::int32_t member): m_member(member)
{

};

MyClass::~MyClass()
{
    
};
