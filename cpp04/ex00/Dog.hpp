/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 00:54:07 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/08 00:54:08 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog(std::string name);
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();

    void makeSound() const ;
};

#endif
