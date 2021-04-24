#ifndef __C_PERSONNAGE_HPP__
#define __C_PERSONNAGE_HPP__
/**
 * @file c_Personnage.hpp
 * @brief 
 * @note 
 *
 * @copyright
 *
 */

/* Includes ------------------------------------------------------------------*/
#include <string>
#include <cstdint>
#include <iostream>

#include "c_Arme.hpp"
/* Public defines ------------------------------------------------------------*/

/* Public declarations -------------------------------------------------------*/
class c_Personnage
{
public:
    void recevoirDegats(std::int32_t nbDegats);
    void attaquer(c_Personnage &cible);
    void boirePotionDeVie(std::int32_t quantitePotion);
    void changerArme(std::string nomNouvelleArme, std::int32_t degatsNouvelleArme);
    bool estVivant(void);
    void afficherEtat(void) const;
    c_Personnage();
    c_Personnage(std::string nomPersonnage);
    c_Personnage(std::string nomPersonnage, std::string nomArme, std::int32_t degatsArme);
    ~c_Personnage();
private:
    /* data */
    std::int32_t m_vie;
    std::int32_t m_mana;
    std::string m_nomPersonnage;

    c_Arme m_arme;
};

/* Public enums --------------------------------------------------------------*/

/* Public structures ---------------------------------------------------------*/

/* Public typedefs -----------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/


#endif /* __C_PERSONNAGE_HPP__ */