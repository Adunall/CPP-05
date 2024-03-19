/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:13:03 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:13:04 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("defaultForm"), _signed(false), _gradeToSign(90), _gradeToExecute(90) {}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
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

bool AForm::beSigned(Bureaucrat &bureaucrat)
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

AForm::~AForm() {}

std::string AForm::getName() const
{
    return(_name);
}

bool AForm::getSigned() const
{
    return(_signed);
}

int AForm::getGradeToSign() const
{
    return(_gradeToSign);
}

int AForm::getGradeToExecute() const
{
    return(_gradeToExecute);
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
    os << "Form: " << form.getName() << ", signed: " << form.getSigned() << ", grade to sign: " << form.getGradeToSign() << ", grade to execute: " << form.getGradeToExecute();
    return(os);
}