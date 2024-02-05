/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 00:54:03 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/08 00:54:04 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(std::string name) : Animal(name) {
    std::cout << "Dog parameterized constructor" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Dog copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << "Dog copy assignment operator" << std::endl;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
