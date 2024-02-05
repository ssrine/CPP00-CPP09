/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:13:37 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/07 23:35:25 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
protected:
    std::string type;
public:
    Animal(); // Default constructor
    Animal(std::string name); // Parameterized constructor
    Animal(const Animal& other); // Copy constructor
    Animal& operator=(const Animal& other); // Copy assignment operator
    virtual ~Animal(); // Destructor

    virtual void makeSound() const; // Virtual function
    const std::string& getType() const; // Getter for type
};

#endif

