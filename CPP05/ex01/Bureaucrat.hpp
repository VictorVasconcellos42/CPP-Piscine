/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:43:47 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/23 17:05:42 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include "Form.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Form;

class Bureaucrat {
    private:
        const std::string	name;
        int					grade;
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat(void);
		
		Bureaucrat&operator=(const Bureaucrat &src);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		descrementGrade(void);
		void		signForm(Form &form);


		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat& political);
