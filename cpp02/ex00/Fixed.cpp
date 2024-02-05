/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:04:43 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/29 22:11:02 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


const int Fixed::fractionalBits = 8;

Fixed::Fixed() : rawValue(0) {
    std::cout << "Default Constructor called\n";
}


Fixed::Fixed(const Fixed& other) {
     std::cout << "Copy Constructor called\n";
     *this = other;
}


Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy Assignment called\n";
    if (this != &other) {
        rawValue = other.getRawBits();
    }
    return *this;
}


Fixed::~Fixed() {
    std::cout << "Destructor called\n";

}


int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called\n";
    return rawValue;
}

void Fixed::setRawBits(int const raw) {
    rawValue = raw;
}
