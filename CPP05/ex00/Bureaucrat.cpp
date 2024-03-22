/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:24:12 by vde-vasc          #+#    #+#             */
/*   Updated: 2024/03/22 20:02:13 by vde-vasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Default"), grade(10)
{
    std::cout << "Default Contructor Calling" << std::endl;
};

Bureaucrat::Bureaucrat(std::string person, int value) : name(person)
{
    std::cout << "Params Contructor Calling" << std::endl;
    if (value > MIN_GRADE)
        throw Bureaucrat::GradeTooLowException();
    else if (value < MAX_GRADE)
        throw Bureaucrat::GradeTooHighException();
    grade = value;
};

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
};

int Bureaucrat::getGrade(void) const
{
    return(this->grade);
};

std::string Bureaucrat::getName(void) const
{
    return(this->name);
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    if (this != &src)
        this->grade = src.getGrade();
    return (*this);
};

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Destructor Bureaucrat Calling" << std::endl; 
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &political)
{
    os << political.getName() << " bureaucrat grade " << political.getGrade() << ".";
    return os;
};

void Bureaucrat::incrementGrade(void)
{
    if (grade == MAX_GRADE)
        throw Bureaucrat::GradeTooHighException();
    grade--;
};

void Bureaucrat::descrementGrade(void)
{
    if (grade == MIN_GRADE)
        throw Bureaucrat::GradeTooLowException();
    grade++;
};