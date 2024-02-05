/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:13:37 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/07 15:50:09 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
protected:
    std::string type;
public:
    Animal();
    Animal(std::string name);
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();

    virtual void makeSound() const;
    const std::string& getType() const;
};

#endif
