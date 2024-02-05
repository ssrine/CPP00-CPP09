/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:09:40 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/25 02:59:03 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "AForm.hpp"

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
    try
    {
        // Create a bureaucrat with a grade of 40
        Bureaucrat *bureaucrat = new Bureaucrat("Bureaucrat", 40);

        // Create different types of forms
        Form *form = new PresidentialPardonForm("bor9adi");
        Form *form2 = new RobotomyRequestForm("salaamaaa");
        Form *form3 = new ShrubberyCreationForm("chajra");

        // Print information about the bureaucrat and forms
        std::cout << *bureaucrat << std::endl;
        std::cout << *form << std::endl;
        std::cout << *form2 << std::endl;
        std::cout << *form3 << std::endl;

        std::cout << "----------------------------------------" << std::endl;

        // Sign the forms by the bureaucrat
        std::cout << "Sign Form section " << std::endl;
        bureaucrat->signForm(*form);
        bureaucrat->signForm(*form2);
        bureaucrat->signForm(*form3);

        // Print information after signing
        std::cout << "----------------------------------------" << std::endl;
        std::cout << *bureaucrat << std::endl;
        std::cout << *form << std::endl;
        std::cout << *form2 << std::endl;
        std::cout << *form3 << std::endl;

        std::cout << "----------------------------------------" << std::endl;

        // Execute the forms by the bureaucrat
        std::cout << "Execute Form section " << std::endl;
        bureaucrat->executeForm(*form);
        bureaucrat->executeForm(*form2);
        bureaucrat->executeForm(*form3);

        // Clean up memory
        delete bureaucrat;
    }
    catch(const std::exception& e)
    {
        // Handle exceptions related to grade out of range
        std::cerr << "Grade out of range " << '\n';
    }

    return (0);
}


