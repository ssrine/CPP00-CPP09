/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:04:36 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/29 22:11:40 by nel-hark         ###   ########.fr       */
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
    Fixed();


    Fixed(const Fixed& other);


    Fixed& operator=(const Fixed& other);

    ~Fixed();


    int getRawBits() const;


    void setRawBits(int const raw);
};

#endif 

