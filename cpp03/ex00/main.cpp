/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:33:09 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/03 16:13:02 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clapTrapDefault;             // Creates a ClapTrap with default constructor
    ClapTrap clapTrapWithName("Bob");     // Creates a ClapTrap with parameterized constructor

    clapTrapDefault.attack("Enemy");      // Simulates an attack
    clapTrapDefault.takeDamage(2);        // Simulates taking damage
    clapTrapDefault.beRepaired(0);        // Simulates being repaired

    clapTrapWithName.attack("Enemy");     // Simulates an attack
    clapTrapWithName.takeDamage(2);       // Simulates taking damage
    clapTrapWithName.beRepaired(0);       // Simulates being repaired

    // Using the copy constructor
    ClapTrap clapTrapCopy(clapTrapDefault);  // Creates a copy using the copy constructor
    clapTrapCopy.attack("Another Enemy");    // Simulates an attack with the copy

    ClapTrap clapTrapAssigned;
    // Using the copy assignment operator
    clapTrapAssigned = clapTrapWithName;  // Creates a copy using the copy assignment operator
    clapTrapAssigned.beRepaired(1);                // Simulates being repaired with the assigned copy

    return 0;
}


// In C++, inheritance is a way 
// to create a new class from an existing class.
//  It allows the new class to inherit the properties 
//  and behaviors of the existing class. This is like 
// how children can inherit traits from their parents.