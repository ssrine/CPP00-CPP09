/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:04:38 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/22 16:11:15 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
    PhoneBook phoneBook;

    while (true) {
        std::string command;
        std::cout << "(ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (std::cin.eof())
            exit(1);
        if (command == "EXIT") {
            std::cout << "Exiting program. Contacts are lost forever!" << std::endl;
            break;
        } else if (command == "ADD") {
            Contact contact;
            contact.setFirstName();
            contact.setLastName();
            contact.setNickname();
            contact.setPhoneNumber();
            contact.setDarkestSecret();
            phoneBook.addContact(contact);
        } else if (command == "SEARCH") {
            phoneBook.searchContact();
        } else {
            std::cout << "Unknown command: " << command << ". Please try again." << std::endl;
        }
    }

    return 0;
}

