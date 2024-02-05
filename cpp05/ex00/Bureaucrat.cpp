/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:09:12 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/24 14:54:18 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Implementations for GradeTooHighException and GradeTooLowException

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

// Implementations for Bureaucrat
Bureaucrat::Bureaucrat() : name("default"), grade(66)
{
    std::cout << "Bureaucrat Default constructor called" << std::endl;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) {

    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();

    this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs)
{
    std::cout << "Bureaucrat Assignation operator called" << std::endl;
    if (this != &rhs)
        grade = rhs.getGrade();
    return (*this);
}

const std::string& Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::incrementGrade() {
    if (grade > 1)
        grade--;
else
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
    if (grade < 150)
        grade++;

    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
