/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:49:32 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/23 22:24:43 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HumanB.h
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
private:
    std::string name;
    Weapon* weapon;

public:
    HumanB(std::string humanName);
    ~HumanB();
    void setWeapon(Weapon& humanWeapon);
    void attack() const;
};
#endif 


