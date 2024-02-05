/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:54:22 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/07 21:57:28 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : brain(new Brain()) {
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& other) : brain(new Brain(*(other.brain))) {
    std::cout << "Cat copy constructor" << std::endl;
}
Cat::Cat(std::string name) : Animal(name) {
    std::cout << "Cat parameterized constructor" << std::endl;
}
Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat copy assignment operator" << std::endl;
    if (this != &other) {
        delete brain;
        brain = new Brain(*(other.brain));
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
    delete brain;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
Brain* Cat::getBrain()const
{
    return brain;
}