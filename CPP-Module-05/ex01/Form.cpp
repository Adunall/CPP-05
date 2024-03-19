/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:03:12 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:03:14 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToSign(90), _gradeToExecute(90) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    try
    {
        checkGrade(gradeToSign);
        checkGrade(gradeToExecute);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

bool Form::beSigned(Bureaucrat &bureaucrat)
{
    try
    {
        if (bureaucrat.getGrade() <= _gradeToSign)
            _signed = true;
        else
            throw Bureaucrat::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return(_signed);
}

Form::~Form() {}

std::string Form::getName() const
{
    return(_name);
}