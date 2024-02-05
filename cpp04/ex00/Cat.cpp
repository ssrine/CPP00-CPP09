/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 00:53:59 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/08 00:54:00 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(std::string name) : Animal(name) {
    std::cout << "Cat parameterized constructor" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << "Cat copy assignment operator" << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
