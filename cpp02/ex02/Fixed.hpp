/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:04:36 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/30 15:28:51 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
private:
    int rawValue;
    static const int fractionalBits;

public:
    // Default constructor
    Fixed();

    // Constructor with an integer parameter
    Fixed(const int value);

    // Constructor with a floating-point parameter
    Fixed(const float value);

    // Copy constructor
    Fixed(const Fixed& other);

    // Copy assignment operator
    Fixed& operator=(const Fixed& other);

    // Destructor
    ~Fixed();

    // Member function to get the raw value
    int getRawBits() const;

    // Member function to set the raw value
    void setRawBits(int const raw);

    // Member function to convert to a floating-point value
    float toFloat() const;

    // Member function to convert to an integer value
    int toInt() const;

    // Overload comparison operators
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    // Overload arithmetic operators
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // Overload increment/decrement operators
    Fixed& operator++();     // Pre-increment
    Fixed operator++(int);   // Post-increment
    Fixed& operator--();     // Pre-decrement
    Fixed operator--(int);   // Post-decrement

    // Static member functions
  static Fixed& min(Fixed &a,Fixed &b);
        static const Fixed& min(const Fixed &a,const Fixed &b);
        static Fixed& max(Fixed &a,Fixed &b);
        static const Fixed& max(const Fixed &a,const Fixed &b);
};
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
