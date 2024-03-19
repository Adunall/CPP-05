/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:47:41 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 16:54:35 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
    std::cout << "Bureaucrat default constructor called!!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat constructor called!!" << std::endl;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::IncrementGrade(int grade)
{
    _grade -= grade;
    if(_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::DecrementGrade(int grade)
{
    _grade += grade;
    if(_grade > 150)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called!!" << std::endl;
}

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
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (os);
}