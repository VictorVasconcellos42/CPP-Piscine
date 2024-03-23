/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:42:01 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/23 17:13:27 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	public:
		Intern(void);
		Intern(const Intern &copy);
		~Intern(void);

		Intern &operator=(const Intern &src);

		AForm *makeForm(std::string form, std::string target);

		class InvalidFormsNameException: public std::exception {
			public:
				const char *what() const throw();
		};
};