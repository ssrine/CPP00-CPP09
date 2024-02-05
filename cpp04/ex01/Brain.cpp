/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:20:24 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/08 00:45:26 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
    std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor" << std::endl;
    for (int i = 0; i < 100; ++i) {
        ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain copy assignment operator" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
}

void Brain::setIdea(int index, const std::string idea) {
    if (index >= 0 && index < 100) {
        ideas[index] = idea;
    }
}

void Brain::displayIdeas() const {
    for (int i = 0; i < 100; ++i) {
        std::cout << "Idea " << i << ": " << ideas[i] << std::endl;
    }
}


// Shallow copy: Objects share the same memory addresses; 
// changes to one object affect the other.

// Deep copy: Objects have independent memory copies; 
// changes to one object do not affect the other


// In simple terms, the setIdea function helps the brain remember things,
//  and displayIdeas function is like asking the brain to show you what it remembers. 
// They work together to make the Brain class smart! 