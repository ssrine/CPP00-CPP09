/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:28:06 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/23 22:23:28 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
    std::string name;

public:
    // Constructor
    Zombie(std::string name) : name(name) {}

    // Destructor
    ~Zombie();

    // Member function to announce
    void announce();
};
 

Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif
