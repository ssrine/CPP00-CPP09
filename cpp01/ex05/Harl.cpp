/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:36:10 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/23 19:19:47 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::debug() {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    // Define an array of member function pointers
    void (Harl::*funcPtr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    // Define an array of complaint levels
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    // Search for the provided level in the levels array
    int i = 0;
    while (i < 4 && levels[i].compare(level))
        i++;
    
    // Check if the level is found
    if (i <= 3) {
        std::cout << "-> ";
        // Call the appropriate member function using the function pointer
        (this->*funcPtr[i])();
    } else {
        std::cerr << "Unknown complaint level: " << level << std::endl;
    }
}