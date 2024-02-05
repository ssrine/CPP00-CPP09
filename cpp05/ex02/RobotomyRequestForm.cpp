/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:08:41 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/25 02:40:33 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// RobotomyRequestForm.cpp
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib> // For std::rand and std::srand


RobotomyRequestForm::RobotomyRequestForm()
    : Form("Robotomy Request Form", 72, 45) ,target("default") {
            std::cout << "Robotomy Request Form is created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : Form("Robotomy Request Form", 72, 45), target(target) {
            std::cout << "Robotomy Request Form is created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& to_copy)
    : Form(to_copy), target(to_copy.target) {
            std::cout << "Robotomy Request Form is copied" << std::endl;
    }

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& assign) {
        std::cout << "Robotomy Request Form is assigned" << std::endl;
    if (this != &assign) {
        Form::operator=(assign);
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
        std::cout << "Robotomy Request Form is destroyed" << std::endl;

}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (getSigned()  == true && executor.getGrade() <= getGradeExec()) {
        std::cout << "Drilling noises... ";
        // Generate a random number to simulate success or failure
        srand(time(0));
        if (std::rand() % 2 == 0) {
            std::cout << target << " has been robotomized successfully!" << std::endl;
        } else {
            std::cout << "Robotomy failed for " << target << "." << std::endl;
        }
    } else {
        std::cerr << "Execution failed. Form not signed or grade too low." << std::endl;
    }
}
