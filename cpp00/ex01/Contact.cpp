/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:27:29 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/22 16:11:12 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "Contact.hpp"

std::string Contact::enterValue(const std::string& str) {
    std::string in;

    std::cout << "Enter the " << str << ": ";
    std::getline(std::cin, in);

    if (std::cin.eof())
        exit(0);

    while (in.empty()) {
        std::cout << "Input for " << str << " is empty. Please try again: ";
        std::getline(std::cin, in);
        if (std::cin.eof())
            exit(0);
    }
    return in;
}

void Contact::setFirstName() {
    while (true) {
        firstName = enterValue("first name");

        if (!firstName.empty()) {
            bool valid = true;
          for (size_t i = 0; i < firstName.length(); ++i) {
                char c = firstName[i];
                if (!std::isalpha(c)) {
                    std::cout << "Invalid input for first name. Please enter alphabetic characters. Please try again." << std::endl;
                    valid = false;
                    break;
                }
            }
            if (valid) {
                break;
            }
        }
    }
}

void Contact::setLastName() {
    while (true) {
        lastName = enterValue("last name");

        if (!lastName.empty()) {
            bool valid = true;
            for (size_t i = 0; i < lastName.length(); ++i) {
                if (!std::isalpha(lastName[i])) {
                    std::cout << "Invalid input for last name. Please enter alphabetic characters. Please try again." << std::endl;
                    valid = false;
                    break;
                }
            }

            if (valid) {
                break; 
            }
        }
    }
}

void Contact::setNickname() {
    while (true) {
        nickname = enterValue("nickname");

        if (!nickname.empty()) {
            break; 
        }
    }
}

void Contact::setPhoneNumber() {
    while (true) {
        phoneNumber = enterValue("phone number");

        if (!phoneNumber.empty()) {
            bool valid = true;
            for (size_t i = 0; i < phoneNumber.length(); ++i) {
                char c = phoneNumber[i];
                if (!std::isdigit(c)) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                break; 
            } else {
                std::cout << "Invalid input for phone number. Please enter a valid phone number. Please try again." << std::endl;
            }
        }
    }
}

void Contact::setDarkestSecret() {
    while (true) {
        darkestSecret = enterValue("darkest secret");

        if (!darkestSecret.empty()) {
            break; 
        }
    }
}

std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickname() const {
    return nickname;
}

std::string Contact::getPhoneNumber() const { 
        return phoneNumber;
}
std::string Contact::getDarkestSecret() const { 
    return darkestSecret;
}