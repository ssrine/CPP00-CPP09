/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:33:09 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/03 16:37:59 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // Create a ClapTrap
    ClapTrap clapTrapDefault;             // default constructor
    ClapTrap clapTrapWithName("Bob");     // parameterized constructor

    clapTrapDefault.attack("Enemy1");
    clapTrapDefault.takeDamage(2);
    clapTrapDefault.beRepaired(0);

    clapTrapWithName.attack("Enemy2");
    clapTrapWithName.takeDamage(2);
    clapTrapWithName.beRepaired(0);

    ClapTrap clapTrapCopy(clapTrapDefault);  // copy constructor
    clapTrapCopy.attack("Another Enemy");

    ClapTrap clapTrapAssigned;
    clapTrapAssigned = clapTrapWithName;  // copy assignment operator
    clapTrapAssigned.beRepaired(1);

    // Create a ScavTrap
    ScavTrap scavTrap("SCAV");

    scavTrap.attack("Enemy3");
    scavTrap.guardGate();

    ScavTrap scavTrapCopy(scavTrap); // Copy constructor

    // ScavTrap copy
    scavTrapCopy.attack("Enemy4");
    scavTrapCopy.takeDamage(3);
    scavTrapCopy.beRepaired(2);

    // Create a FragTrap
    FragTrap fragTrapDefault;               // Default constructor
    FragTrap fragTrapWithName("FRAG");     // Parameterized constructor

    fragTrapDefault.attack("Enemy5");
    fragTrapDefault.takeDamage(3);
    fragTrapDefault.beRepaired(2);

    fragTrapWithName.attack("Enemy6");
    fragTrapWithName.takeDamage(3);
    fragTrapWithName.beRepaired(2);

    FragTrap fragTrapCopy(fragTrapDefault); // Copy constructor
    fragTrapCopy.attack("Another Enemy");

    FragTrap fragTrapAssigned;
    fragTrapAssigned = fragTrapWithName;    // Copy assignment operator
    fragTrapAssigned.beRepaired(1);

    // FragTrap-specific function
    fragTrapWithName.highFivesGuys();

    return 0;
}
