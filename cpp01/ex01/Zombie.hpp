/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:28:06 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/23 17:46:04 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>


class Zombie {
private:
    std::string name;

public:
    // Constructors and destructor
    Zombie();
    ~Zombie();

    // Member functions
    void announce();
    void setName(std::string newName);
};
Zombie* zombieHorde(int N, std::string name);
#endif
