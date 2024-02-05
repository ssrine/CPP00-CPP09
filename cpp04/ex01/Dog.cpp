/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:47:51 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/07 21:58:08 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : brain(new Brain()) {
    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& other) : brain(new Brain(*(other.brain))) // When we copy a dog, we also copy its Brain.
{
    std::cout << "Dog copy constructor" << std::endl;
}

Dog::Dog(std::string name) : Animal(name) {
    std::cout << "Dog parameterized constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog copy assignment operator" << std::endl;
    if (this != &other) {
        delete brain;
        brain = new Brain(*(other.brain));
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
    delete brain; // When a dog goes away, we also say goodbye to its Brain.
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrain() const {
    return brain;
}
