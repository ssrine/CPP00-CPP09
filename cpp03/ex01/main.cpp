/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:33:09 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/03 16:29:25 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // Create a ClapTrap
    ClapTrap clapTrapDefault;             // default constructor
    ClapTrap clapTrapWithName("Bob");     //  parameterized constructor

 
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

    return 0;
}
