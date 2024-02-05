/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:57:15 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/03 10:38:47 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap(); // Default constructor
    FragTrap(const FragTrap& other); // Copy constructor
    FragTrap& operator=(const FragTrap& other); // Copy assignment operator
    FragTrap(std::string Name); // Parameterized constructor
    ~FragTrap(); // Destructor

    void highFivesGuys();
};

#endif // FRAGTRAP_HPP
