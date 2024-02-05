/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:09:40 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/25 02:59:20 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat test("test", 200); 
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    try {
        Bureaucrat a("a", 150);
        Bureaucrat b("b", 1);

        std::cout << a << std::endl;
        std::cout << b << std::endl;
        a.decrementGrade();
	
		b.incrementGrade();
	
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << std::endl;
        a.incrementGrade();
        b.decrementGrade();
        std::cout << a << std::endl;
        std::cout << b << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
