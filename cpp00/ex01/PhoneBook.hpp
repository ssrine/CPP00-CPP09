/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:02:55 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/22 16:11:47 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <iostream>
#include <limits>
#include <sstream>
#include "Contact.hpp"  

class PhoneBook {
private:
    Contact contacts[8];
    size_t nextIndex;
    size_t currentIndex;
public:
    PhoneBook() : nextIndex(0), currentIndex(0) {}   // Constructor
    void addContact(const Contact& contact);
    void displayContacts() const;
    void searchContact() const;
};

#endif 



