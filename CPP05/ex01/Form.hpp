/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:31:31 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/22 23:15:53 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat;

class Form {
	private:
		const std::string	name;
		const int			gradeToSign;
		const int			gradeToExecute;
		bool				sign;
	public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &copy);
		~Form(void);

		Form&operator=(const Form &src);

		std::string	getName(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		bool		getSign(void) const;
		void		beSigned(Bureaucrat &politic);
		
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw()
				{
					return ("Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw()
				{
					return ("Grade is too low");
				}
		};
};

std::ostream &operator<<(std::ostream &os, const Form &form);