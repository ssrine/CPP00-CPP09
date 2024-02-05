/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:13:37 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/05 18:02:54 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal {
protected:
    std::string type;

public:
    AAnimal();                       // Default constructor
    AAnimal(std::string name);       // Parameterized constructor
    AAnimal(const AAnimal& other);   // Copy constructor
    AAnimal& operator=(const AAnimal& other); // Copy assignment operator
    virtual ~AAnimal();              // Destructor

    virtual void makeSound() const = 0;  // Pure virtual function
    const std::string& getType() const;
};
#endif
