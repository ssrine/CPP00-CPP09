/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:57:11 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/03 10:39:13 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap named " << _name << " is born with default constructor!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap named " << _name << " has been copied!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other); 
        std::cout << "FragTrap named " << _name << " has been assigned!" << std::endl;
    }
    return *this;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
    std::cout << "FragTrap named " << _name << " is born with parameterized constructor!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap named " << _name << " is no more!" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " requests positive high fives!" << std::endl;
}
