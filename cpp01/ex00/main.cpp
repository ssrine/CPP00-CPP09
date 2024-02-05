/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:27:54 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/23 22:22:44 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    // Use newZombie to create a Zombie on the heap
    Zombie* zombieOnHeap = newZombie("HeapZombie");
    zombieOnHeap->announce();
    // Delete the Zombie to free the allocated memory
    delete zombieOnHeap;

    // Use randomChump to create a Zombie on the stack
    randomChump("StackZombie");

    return 0;
}
