/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:27:25 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/22 16:10:04 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip> 
#include <cctype> 
#include <cstdlib> 
class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
public:
    // Setters for private members
    std::string enterValue(const std::string& str);
    void setFirstName();
    void setLastName();
    void setNickname();
    void setPhoneNumber();
    void setDarkestSecret();

    // Getters for private members
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;          // "read-only"
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;
};

#endif

