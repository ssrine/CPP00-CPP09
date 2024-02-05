/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:33:00 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/03 16:40:56 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap default constructor!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& arg) : _name(arg), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap named " << _name << " is born with parameterized constructor!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap named " << _name << " is no more!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hitPoints(other._hitPoints),
                                            _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) {
    std::cout << "ClapTrap named " << _name << " has been copied!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap named " << _name << " has been assigned!" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } else {
        std::cout << "ClapTrap " << _name << " is out of energy and can't attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (_hitPoints > 0) {
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
        if (_hitPoints > amount) {
            _hitPoints -= amount;
        } else {
            _hitPoints = 0;
        }
    } else {
        std::cout << "ClapTrap " << _name << " is already out of hit points and can't take more damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints > 0) {
        std::cout << "ClapTrap " << _name << " is being repaired and gains " << amount << " hit points!" << std::endl;
        _hitPoints += amount;
        _energyPoints--;
    } else {
        std::cout << "ClapTrap " << _name << " is already out of hit points and can't be repaired!" << std::endl;
    }
}
