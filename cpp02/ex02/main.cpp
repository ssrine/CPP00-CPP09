/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:00:23 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/27 14:21:08 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main() {
    Fixed a;                           // Default constructor, a = 0
    Fixed const b(Fixed(5.05f) * Fixed(2)); // Constructor with a float parameter, b = 5.05 * 2 = 10.1

    std::cout << a << std::endl;        // Output: 0
    std::cout << ++a << std::endl;      // Pre-increment, a = 0 + 1 / (2^8) = 0.00390625
    std::cout << a << std::endl;        // Output: 0.00390625
    std::cout << a++ << std::endl;      // Post-increment, a = 0.00390625, then increment
    std::cout << a << std::endl;        // Output: 0.0078125
    std::cout << b << std::endl;        // Output: 10.1016
    std::cout << Fixed::max(a, b) << std::endl; // Static member function, Output: 10.1016

    return 0;
}
