/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-hark <nel-hark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:08:44 by nel-hark          #+#    #+#             */
/*   Updated: 2023/12/25 02:30:00 by nel-hark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &to_copy);
		~RobotomyRequestForm();
		RobotomyRequestForm();

		RobotomyRequestForm& operator=(const RobotomyRequestForm &assign);

		void execute(Bureaucrat const& executor) const;

		private:
			const std::string target;
};

#endif // ROBOTOMYREQUESTFORM_HPP