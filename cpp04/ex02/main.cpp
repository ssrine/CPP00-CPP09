/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:16:51 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/08 00:02:47 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iostream>
#include <sstream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
    // Test for polymorphism and dynamic memory allocation
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    // AAnimal hghg;
    // Make sounds using polymorphism
    j->makeSound();
    i->makeSound();

    // Deallocate memory, should not create a leak
    delete j;
    delete i;

    // Additional tests
    Dog* dog1 = new Dog();
    dog1->makeSound();
    dog1->getBrain()->setIdea(0, "Fetch the stick");
    dog1->getBrain()->displayIdeas();

    Dog* dog2 = new Dog(*dog1); // Copy constructor

    std::cout << "Address of dog1's brain: " << dog1->getBrain() << std::endl;
    std::cout << "Address of dog2's brain: " << dog2->getBrain() << std::endl;

    // Modify the original Dog object
    dog1->getBrain()->setIdea(1, "Chase the ball");
    dog1->getBrain()->displayIdeas();

    Dog* dog3 = new Dog();
    *dog3 = *dog1; // Copy assignment

    std::cout << "Address of dog3's brain: " << dog3->getBrain() << std::endl;

    // Deallocate additional memory
    delete dog1;
    delete dog2;
    delete dog3;

    return 0;
}
