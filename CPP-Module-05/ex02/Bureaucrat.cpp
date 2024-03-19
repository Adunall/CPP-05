/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:11:35 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:11:37 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("defaultBureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    try
    {
        checkGrade(grade);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << YELLOW "!!!Setting grade to default: 150!!!" RESET << std::endl;
    }
}

void checkGrade(int grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::incrementGrade(void)
{
    try
    {
        _grade--;
        checkGrade(_grade);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        _grade++;
        std::cout << YELLOW "!!!Setting grade back to the previous one!!!" RESET << std::endl;
    }
}

void Bureaucrat::decrementGrade(void)
{
    try
    {
        _grade++;
        checkGrade(_grade);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        _grade--;
        std::cout << YELLOW "!!!Setting grade back to the previous one!!!" RESET << std::endl;
    }
}

void Bureaucrat::signForm(AForm &form)
{
    if(_grade <= form.getGradeToSign())
        std::cout << GREEN << _name << " signs " << form.getName() << RESET << std::endl;
    else
        std::cout << RED << _name << " cannot sign " << form.getName() << RESET << std::endl;
}

void Bureaucrat::executeForm(AForm const &form) const
{
    try
    {
        form.execute(*this);
        std::cout << GREEN << _name << " executes " << form.getName() << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << RED << _name << " cannot execute " << form.getName() << RESET << std::endl;
    }
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}