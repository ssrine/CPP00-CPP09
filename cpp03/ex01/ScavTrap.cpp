/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:53:34 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/03 16:23:23 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap named " << _name << " is born with default constructor!" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
    std::cout << "ScavTrap named " << _name << " is born with parameterized constructor!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap named " << _name << " has been copied!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other); 
        std::cout << "ScavTrap named " << _name << " has been assigned!" << std::endl;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap named " << _name << " is no more!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints -= 1; 
    } else if (_energyPoints <= 0) {
        std::cout << "ScavTrap " << _name << " can't attack - not enough energy points!" << std::endl;
    } else {
        std::cout << "ScavTrap " << _name << " can't attack - no hit points left!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode!" << std::endl;
}
