/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:48:17 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/08 00:24:05 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
    Brain* brain;

public:
    Cat();
    Cat(std::string name);
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat() ;
    void makeSound() const;
    Brain* getBrain()const;

};

#endif


