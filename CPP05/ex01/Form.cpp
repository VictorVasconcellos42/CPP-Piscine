/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:45:37 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/22 23:16:53 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("Default"), gradeToSign(20), gradeToExecute(10), sign(false)
{
	std::cout << "Default Contructor Calling" << std::endl;
};

Form::Form(std::string form, int sign, int execute) : name(form), gradeToSign(sign), gradeToExecute(execute), sign(false)
{
	std::cout << "Params Contructor Calling" << std::endl;
	if (sign > MIN_GRADE || execute > MIN_GRADE)
		throw Form::GradeTooLowException();
	else if (sign < MAX_GRADE || execute < MAX_GRADE)
		throw Form::GradeTooHighException();
};

Form &Form::operator=(const Form &src)
{
	if (this != &src)
	{
		this->sign = src.getSign();
	}
	return (*this);
};

Form::Form(const Form &copy): name(copy.getName()), gradeToSign(copy.getGradeToSign()), gradeToExecute(copy.getGradeToExecute())
{
	if (copy.getGradeToSign() > MIN_GRADE || copy.getGradeToExecute()  > MIN_GRADE)
		throw Form::GradeTooLowException();
	else if (copy.getGradeToSign() < MAX_GRADE || copy.getGradeToExecute() < MAX_GRADE)
		throw Form::GradeTooHighException();
	*this = copy;
};

int Form::getGradeToSign(void) const
{
	return(this->gradeToSign);
};

int Form::getGradeToExecute(void) const
{
	return(this->gradeToExecute);
};

std::string Form::getName(void) const
{
	return(this->name);
};

bool Form::getSign(void) const
{
	return(this->sign);
};

void Form::beSigned(Bureaucrat &politic)
{
	if (politic.getGrade() > this->gradeToSign)
		throw Form::GradeTooLowException();
	this->sign = true;
};


Form::~Form(void)
{
	std::cout << "Destructor Form Calling" << std::endl;
};

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Form: " << form.getName() << std::endl << "grade to sign: " << form.getGradeToSign() << std::endl << "grade to execute: " << form.getGradeToExecute() << std::endl << "is signed: " << form.getSign() << ".";
	return os;
};