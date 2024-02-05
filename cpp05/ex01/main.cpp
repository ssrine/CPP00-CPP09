/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:09:40 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/17 20:38:13 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"

int main() {
    try {
        Form form1("Form 1", 50, 30);
        Bureaucrat bureaucrat1("Alice", 55);

        bureaucrat1.signForm(form1);
        std::cout << form1 << std::endl;

        Form form2("Form 2", 60, 40);
        Bureaucrat bureaucrat2("Bob", 45);

        bureaucrat2.signForm(form2);
        std::cout << form2 << std::endl;

        Form form3("Form 3", 70, 50);
        Bureaucrat bureaucrat3("Charlie", 75);

        bureaucrat3.signForm(form3);
        std::cout << form3 << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}


