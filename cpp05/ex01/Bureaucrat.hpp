/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:09:07 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/24 15:00:21 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "Form.hpp" // Include the correct header file for Form

#include <iostream>
#include <string>
class Form;
class Bureaucrat {
private:
    const std::string name;
    int grade;

public:
    // Nested exception classes for handling grade-related issues
    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };
                                 //custom exception classes
    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };

    // Constructor: Initializes a Bureaucrat with a name and grade
    Bureaucrat(const std::string& name, int grade);

    // Destructor: Cleans up resources if needed
    Bureaucrat();
    ~Bureaucrat();
Bureaucrat(Bureaucrat const & src);
       
        Bureaucrat&    operator=(const Bureaucrat &rhs);
    // Getter for the name attribute
    const std::string& getName() const;

    // Getter for the grade attribute
    int getGrade() const;

    // Method to increment the grade, may throw GradeTooHighException
    void incrementGrade();

    // Method to decrement the grade, may throw GradeTooLowException
    void decrementGrade();
    void signForm(Form& form) const;

};

// Overloaded << operator for easy printing of Bureaucrat objects
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
