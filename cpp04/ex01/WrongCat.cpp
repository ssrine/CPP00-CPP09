/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:05:52 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/05 18:05:53 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name) {
    std::cout << "WrongCat parameterized constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        WrongAnimal::operator=(other);
    }
    std::cout << "WrongCat copy assignment operator" << std::endl;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Some generic wrong cat sound" << std::endl;
}
