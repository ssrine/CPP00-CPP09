/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:04:05 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/17 21:45:34 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"


void PhoneBook::addContact(const Contact& contact) {
    if (nextIndex < 8) {
        // If there is space in the array, simply add the contact
        contacts[nextIndex++] = contact;
        std::cout << "Contact added!" << std::endl;
    } else {
        // Replace the oldest contact with the new one
        size_t oldestIndex = (currentIndex + 1) % 8;
        contacts[currentIndex] = contact;
        currentIndex = oldestIndex;  // Update currentIndex to the new oldest index
        std::cout << "Contact added! Oldest contact replaced." << std::endl;
    }
}



void PhoneBook::displayContacts() const {
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (size_t i = 0; i < nextIndex; ++i) {
        std::string firstName = contacts[i].getFirstName();
        std::string lastName = contacts[i].getLastName();
        std::string nickname = contacts[i].getNickname();

        // Truncate if the string is too long
        if (firstName.length() > 10)
            firstName = firstName.substr(0, 9) + ".";
        if (lastName.length() > 10)
            lastName = lastName.substr(0, 9) + ".";
        if (nickname.length() > 10)
            nickname = nickname.substr(0, 9) + ".";

        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << std::right << firstName << "|"
                  << std::setw(10) << std::right << lastName << "|"
                  << std::setw(10) << std::right << nickname << std::endl;
    }
}



void PhoneBook::searchContact() const {
    if (nextIndex == 0) {
        std::cout << "No contacts in the phone book." << std::endl;
        return;
    }

    displayContacts(); 

    long long index; 
    std::string input;

    while (true) {
        std::cout << "Enter the index of the contact to display: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(1);
        
        // Check if input is not empty
        if (!input.empty()) {
            std::istringstream iss(input);
            if (iss >> index && iss.eof()) {
                if (index >= 0 && static_cast<size_t>(index) < nextIndex) {
                    break;  
                } else {
                    std::cout << "Invalid index. Please enter a valid index between 0 and " << nextIndex - 1 << "." << std::endl;
                }
            } else {
                std::cout << "Invalid input. Please enter a valid index between 0 and " << nextIndex - 1 << "." << std::endl;
            }
        } else {
            std::cout << "Input cannot be empty. Please enter a valid index." << std::endl;
        }
    }

    const Contact& contact = contacts[static_cast<size_t>(index)];
    std::cout << "Contact Information:" << std::endl;
    std::cout << "Index: " << index << std::endl;
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}


