/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:09:40 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/25 02:57:07 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern      intern;

    Form        *form = intern.makeForm("shrubbery", "Form");
    Form        *form2 = intern.makeForm("robotomy", "Form2");
    Form        *form3 = intern.makeForm("presidential", "Form3");

    std::cout << *form << std::endl;
    std::cout << *form2 << std::endl;
    std::cout << *form3 << std::endl;

    delete form;
    delete form2;
    delete form3;
    return (0);
}