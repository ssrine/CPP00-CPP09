/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:53:24 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/03 16:03:47 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap(); // Default constructor
    ScavTrap(std::string Name); // Parameterized constructor
    ScavTrap(const ScavTrap& other); // Copy constructor
    ScavTrap& operator=(const ScavTrap& other); // Copy assignment operator
    ~ScavTrap(); // Destructor

    void attack(const std::string& target);
    void guardGate();
};

#endif

