/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:27:54 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/23 17:46:16 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main() {
    int hordeSize = 5;
    std::string commonName = "Zombie";

    Zombie* zombieArmy = zombieHorde(hordeSize, commonName);

    for (int i = 0; i < hordeSize; ++i) {
        zombieArmy[i].announce();
    }
    delete[] zombieArmy;
    return 0;
}
