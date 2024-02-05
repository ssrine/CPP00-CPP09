/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:04:43 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/29 22:12:20 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::fractionalBits = 8;


Fixed::Fixed() {
    rawValue = 0;
    std::cout << "Default Constructor called\n";
}


Fixed::Fixed(const int value) : rawValue(value << fractionalBits) {
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float value) : rawValue(static_cast<int>(roundf(value * (1 << fractionalBits)))) {
    std::cout << "Float constructor called\n";
}


Fixed::Fixed(const Fixed& other) {
     std::cout << "Copy Constructor called\n";
     *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called\n";
    if (this != &other) {
        rawValue = other.rawValue;
    }
    return *this;
}



Fixed::~Fixed() {
    std::cout << "Destructor called\n";

}


int Fixed::getRawBits() const {
    return rawValue;
}

void Fixed::setRawBits(int const raw) {
    rawValue = raw;
}

float Fixed::toFloat() const {
    return static_cast<float>(rawValue) / (1 << fractionalBits);
}

int Fixed::toInt() const {
    return rawValue >> fractionalBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}

