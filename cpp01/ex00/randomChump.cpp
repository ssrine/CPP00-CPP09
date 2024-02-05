/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:27:50 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/23 22:23:08 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

// Function to create a Zombie on the stack 
void randomChump(std::string name) {
    Zombie zombie = Zombie(name);
    zombie.announce();
}
