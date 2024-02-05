/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:08:39 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/25 02:21:54 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// PresidentialPardonForm.hpp

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public Form
{
public:
PresidentialPardonForm();
    PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);

    void execute(Bureaucrat const &executor) const;

private:
    const std::string target;
};

#endif // PRESIDENTIALPARDONFORM_HPP
