/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:13:51 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/07 17:53:22 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

// Default constructor
Animal::Animal() : type("Unknown") {
    std::cout << "Animal default constructor" << std::endl;
}

// Parameterized constructor
Animal::Animal(std::string name) : type(name) {
    std::cout << "Animal parameterized constructor" << std::endl;
}

// Copy constructor
Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copy constructor" << std::endl;
}

// Copy assignment operator
Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal copy assignment operator" << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

// Destructor
Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

// Virtual function
void Animal::makeSound() const {
    std::cout << "Generic animal sound" << std::endl;
}

// Getter for type
const std::string& Animal::getType() const {
    return type;
}

