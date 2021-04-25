#ifndef _CLASS_DUREE_HPP_
#define _CLASS_DUREE_HPP_
/**
 * @file class_Duree.hpp
 * @brief 
 * @note 
 *
 * @copyright
 *
 */

/* Includes ------------------------------------------------------------------*/
#include <iostream>
#include <cstdint>

/* Public defines ------------------------------------------------------------*/

/* Public declarations -------------------------------------------------------*/

/* Public enums --------------------------------------------------------------*/


/* Public structures ---------------------------------------------------------*/

/* Public typedefs -----------------------------------------------------------*/

/* Public functions ----------------------------------------------------------*/

class Duree
{
    public:
    /**
     * @brief Methode of class Duree allowing to print the currect object value
     * 
     */ 
    bool estEgale(Duree const &b) const;

    /**
     * @brief Methode of class Duree allowing to print the currect object value
     * 
     */ 
    bool estDifferent(Duree const &b) const;

    /**
     * @brief Methode of class Duree allowing to print the currect object value
     * 
     */ 
    bool estSupperieur(Duree const &b) const;

    /**
     * @brief Methode of class Duree allowing to print the currect object value
     * 
     */ 
    bool estInferieur(Duree const &b) const;

    /**
     * @brief Methode of class Duree allowing to overload operator +=
     * 
     */ 
    Duree &operator+=(Duree const &a);
    
    /**
     * @brief Methode of class Duree allowing to print the currect object value
     * 
     */ 
    void AfficherDuree(void) const;

    /**
     * @brief Constructor of class Duree
     * 
     * @param[in] heure hours count
     * @param[in] minute minutes count
     * @param[in] seconde seconds count
     * 
     */ 
    Duree(std::uint32_t heure , std::uint32_t minute, std::uint32_t seconde);

    /**
     * @brief Constructor of class Duree
     * 
     * @param[in] minute minutes count
     * @param[in] seconde seconds count
     * 
     */ 
    Duree(std::uint32_t minute, std::uint32_t seconde);

    /**
     * @brief Constructor of class Duree
     * 
     * @param[in] seconde seconds count
     * 
     */ 
    Duree(std::uint32_t seconde);

    /**
     * @brief Constructor of class Duree
     * 
     */ 
    Duree(void);

    ~Duree();

    private:
    std::uint32_t m_heure;
    std::uint32_t m_minute;
    std::uint32_t m_seconde;
};

/**
 * @brief Overcharge of operator == dedicated to class Duree
 * 
 * @param[in] a object of type Duree
 * @param[in] a object of type Duree
 * 
 */ 
bool operator== (Duree const &a, Duree const &b);

/**
 * @brief Overcharge of operator >= dedicated to class Duree
 * 
 * @param[in] a object of type Duree
 * @param[in] a object of type Duree
 * 
 */
bool operator>= (Duree const &a, Duree const &b);

/**
 * @brief Overcharge of operator > dedicated to class Duree
 * 
 * @param[in] a object of type Duree
 * @param[in] a object of type Duree
 * 
 */
bool operator> (Duree const &a, Duree const &b);

/**
 * @brief Overcharge of operator <= dedicated to class Duree
 * 
 * @param[in] a object of type Duree
 * @param[in] a object of type Duree
 * 
 */
bool operator<= (Duree const &a, Duree const &b);

/**
 * @brief Overcharge of operator < dedicated to class Duree
 * 
 * @param[in] a object of type Duree
 * @param[in] a object of type Duree
 * 
 */
bool operator< (Duree const &a, Duree const &b);

/**
 * @brief Overcharge of operator != dedicated to class Duree
 * 
 * @param[in] a object of type Duree
 * @param[in] a object of type Duree
 * 
 */
bool operator!= (Duree const &a, Duree const &b);

/**
 * @brief Overcharge of operator + dedicated to class Duree
 * 
 * @param[in] a object of type Duree
 * @param[in] b object of type Duree
 * 
 */
Duree operator+ (Duree const &a, Duree const &b);

#endif /* _CLASS_DUREE_HPP_ */