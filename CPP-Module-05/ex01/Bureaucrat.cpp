/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:03:05 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:08:52 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    try
    {
        checkGrade(grade);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << GREEN "!!!Setting grade to default: 150!!!" RESET << std::endl;
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
        std::cout << GREEN "!!!Setting grade back to the previous one!!!" RESET << std::endl;
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
        std::cout << GREEN "!!!Setting grade back to the previous one!!!" RESET << std::endl;
    }
}

void Bureaucrat::signForm(Form &form)
{
    if(form.beSigned(*this))
        std::cout << GREEN << _name << " signs " << form.getName() << RESET << std::endl;
    else
        std::cout << RED << _name << " cannot sign " << form.getName() << RESET << std::endl;
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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << "Bureaucrat: " << bureaucrat.getName() << ", grade: " << bureaucrat.getGrade();
    return(os);
}