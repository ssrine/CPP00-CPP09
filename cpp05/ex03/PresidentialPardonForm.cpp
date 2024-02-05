/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:08:35 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/25 02:40:43 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PresidentialPardonForm.cpp

#include "PresidentialPardonForm.hpp"
#include <iostream>


PresidentialPardonForm::PresidentialPardonForm()
    : Form("Presidential Pardon Form", 25, 5) ,target("default"){
            std::cout << "Presidential Pardon Form is created" << std::endl;

    }
PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : Form("Presidential Pardon Form", 25, 5), target(target) {
            std::cout << "Presidential Pardon Form is created" << std::endl;

    }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &to_copy)
    : Form(to_copy), target(to_copy.target) {
            std::cout << "Presidential Pardon Form is copied" << std::endl;

    }

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &original)
{
    std::cout << "Presidential Pardon Form is assigned" << std::endl;
    if (this != &original)
    {
        Form::operator=(original);
    
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
        std::cout << "Presidential Pardon Form is destroyed" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (getSigned() == true && executor.getGrade() <= getGradeExec())
    {
        std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else
    {
        std::cerr << "Execution failed. Form not signed or grade too low." << std::endl;
    }
}

