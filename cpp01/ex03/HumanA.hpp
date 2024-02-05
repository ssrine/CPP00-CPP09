/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:48:11 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/23 22:24:33 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HumanA.h
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {
private:
    std::string name;
    Weapon& weapon; 

public:
    HumanA(std::string humanName, Weapon& humanWeapon);
    ~HumanA();
    void attack() const;
};
#endif 