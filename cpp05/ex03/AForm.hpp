/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:05:03 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/24 20:29:37 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Bureaucrat.hpp"
class Bureaucrat; // Forward declaration

class Form {
private:
   const std::string name;
    bool isSigned;
   const int gradeSign;
  const  int gradeExec;

public:
    Form(const std::string& name, int gradeSign, int gradeExec);
    Form(const Form& other);
   virtual ~Form();
    Form();  

    Form& operator=(const Form& other);

    const std::string& getName() const;
    bool getSigned() const;
    int getGradeSign() const;
    int getGradeExec() const;

    void beSigned(const Bureaucrat& bureaucrat);
    virtual void execute(Bureaucrat const& executor) const = 0;

    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };

    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif


