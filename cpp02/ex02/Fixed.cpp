/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:04:43 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/01 14:47:06 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// Initialize the number of fractional bits to 8
const int Fixed::fractionalBits = 8;

// Default constructor
Fixed::Fixed() : rawValue(0) {}

// Constructor with an integer parameter
Fixed::Fixed(const int value) : rawValue(value << fractionalBits) {}

// Constructor with a floating-point parameter
Fixed::Fixed(const float value) : rawValue(static_cast<int>(roundf(value * (1 << fractionalBits)))) {}

// Copy constructor
Fixed::Fixed(const Fixed& other) : rawValue(other.rawValue) {}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        rawValue = other.rawValue;
    }
    return *this;
}

// Destructor
Fixed::~Fixed() {}

// Member function to get the raw value
int Fixed::getRawBits() const {
    return rawValue;
}

// Member function to set the raw value
void Fixed::setRawBits(int const raw) {
    rawValue = raw;
}

// Member function to convert to a floating-point value
float Fixed::toFloat() const {
    return static_cast<float>(rawValue) / (1 << fractionalBits);
}

// Member function to convert to an integer value
int Fixed::toInt() const {
    return rawValue >> fractionalBits;
}

// Overload comparison operators
bool Fixed::operator>(const Fixed& other) const {
    return rawValue > other.rawValue;
}

bool Fixed::operator<(const Fixed& other) const {
    return rawValue < other.rawValue;
}

bool Fixed::operator>=(const Fixed& other) const {
    return rawValue >= other.rawValue;
}

bool Fixed::operator<=(const Fixed& other) const {
    return rawValue <= other.rawValue;
}

bool Fixed::operator==(const Fixed& other) const {
    return rawValue == other.rawValue;
}

bool Fixed::operator!=(const Fixed& other) const {
    return rawValue != other.rawValue;
}

// Overload arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result.setRawBits(rawValue + other.rawValue);
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.setRawBits(rawValue - other.rawValue);
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result.setRawBits((rawValue * other.rawValue) >> fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    Fixed result;
    result.setRawBits((rawValue << fractionalBits) / other.rawValue);
    return result;
}

// Overload increment/decrement operators
Fixed& Fixed::operator++() {
    ++rawValue;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed& Fixed::operator--() {
    --rawValue;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    --(*this);
    return temp;
}

//static
Fixed& Fixed::min(Fixed &a,Fixed &b){
    if(a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a,const Fixed &b){
    if(a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a,Fixed &b){
    if(a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a,const Fixed &b){
    if(a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

// Overload of the insertion operator to output a floating-point representation
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}
