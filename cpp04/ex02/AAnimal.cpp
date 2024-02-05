/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:13:51 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/05 18:03:30 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : type("AAnimal") {
    std::cout << "AAnimal default constructor" << std::endl;
}

AAnimal::AAnimal(std::string name) : type(name) {
    std::cout << "AAnimal parameterized constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type) {
    std::cout << "AAnimal copy constructor" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "AAnimal copy assignment operator" << std::endl;
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor" << std::endl;
}

const std::string& AAnimal::getType() const {
    return type;
}
void AAnimal::makeSound() const{}