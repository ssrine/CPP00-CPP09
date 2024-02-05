/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:57:01 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/07 21:57:02 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();
    Cat(std::string name);
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();

    void makeSound() const;
};

#endif
