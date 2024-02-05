/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:08:49 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/25 02:33:25 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ShrubberyCreationForm.hpp
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& to_copy);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& original);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm();
    void execute(const Bureaucrat& executor) const ;

private:
    std::string target;
};

#endif // SHRUBBERYCREATIONFORM_HPP
