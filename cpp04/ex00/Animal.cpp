/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:13:51 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/08 00:53:33 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Animal") {
    std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(std::string name) : type(name) {
    std::cout << "Animal parameterized constructor" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copy constructor" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Animal copy assignment operator" << std::endl;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Some generic animal sound" << std::endl;
}

const std::string& Animal::getType() const {
    return type;
}
