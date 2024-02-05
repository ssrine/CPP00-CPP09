/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:09:07 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/25 01:51:40 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

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
Bureaucrat();
    // Constructor: Initializes a Bureaucrat with a name and grade
    Bureaucrat(const std::string& name, int grade);

    // Destructor: Cleans up resources if needed
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
};

// Overloaded << operator for easy printing of Bureaucrat objects
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif

//Both GradeTooHighException and GradeTooLowException classes   the what() function. This allows us to provide a 
//custom implementation for this function in our specific exception classes.





// Exception Basics:

// Exceptions are used in C++ to handle unexpected situations or errors in a program.
// Throwing an Exception:

// You use throw to create and throw an exception when something goes wrong.
// Example: throw MyException();
// Catching an Exception:

// You use try and catch to manage exceptions.
// try contains the code that might cause a problem.
// catch is a safety net that specifies how to handle problems if they occur.