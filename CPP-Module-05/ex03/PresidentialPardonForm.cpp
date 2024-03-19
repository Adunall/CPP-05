/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:14:06 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:14:08 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (!this->getSigned())
            throw AForm::FormNotSignedException();
        if (executor.getGrade() > this->getGradeToSign())
            throw AForm::GradeTooLowToSignException();
        if (executor.getGrade() > this->getGradeToExecute())
            throw AForm::GradeTooLowToExecuteException();
        std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

std::string PresidentialPardonForm::getTarget() const
{
    return _target;
}

std::string PresidentialPardonForm::getName() const
{
    return AForm::getName();
}

bool PresidentialPardonForm::getSigned() const
{
    return AForm::getSigned();
}

int PresidentialPardonForm::getGradeToSign() const
{
    return AForm::getGradeToSign();
}

int PresidentialPardonForm::getGradeToExecute() const
{
    return AForm::getGradeToExecute();
}