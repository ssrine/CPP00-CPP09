/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:16:51 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/08 00:54:55 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();


    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongJ = new WrongCat();


    std::cout << wrongJ->getType() << "!" << std::endl;
    wrongMeta->makeSound();
    wrongJ->makeSound(); 


    delete wrongMeta;
    delete wrongJ;

    return 0;
}