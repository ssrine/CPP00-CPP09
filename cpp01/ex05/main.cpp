/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:22:19 by nel-hark          #+#    #+#             */
/*   Updated: 2023/11/20 17:40:55 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl test;
    std::string str;
    
    std::cout << "Enter the complaint level (DEBUG, INFO, WARNING, ERROR):" << std::endl;
    getline(std::cin, str);
    
    while (!std::cin.eof()) {
        test.complain(str);
        std::cout << "Enter the complaint level (DEBUG, INFO, WARNING, ERROR):" << std::endl;
        getline(std::cin, str);
    }
    
    return 0;
}