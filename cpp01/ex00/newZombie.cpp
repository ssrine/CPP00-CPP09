/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:27:59 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/23 17:05:48 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

// Function to create a Zombie on the heap
Zombie* newZombie(std::string name) {
    Zombie* zombie = new Zombie(name);  
    return zombie;
}

