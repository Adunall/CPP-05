/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:12:28 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:12:30 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (!this->getSigned())
            throw AForm::FormNotSignedException();
        if (executor.getGrade() > this->getGradeToSign())
            throw AForm::GradeTooLowToSignException();
        if (executor.getGrade() > this->getGradeToExecute())
            throw AForm::GradeTooLowToExecuteException();
        std::srand(std::time(0));
        if (std::rand() % 2)
            std::cout << BLUE"*Drilling noises*" << std::endl << GREEN << this->getTarget() << " has been robotomized successfully"RESET << std::endl;
        else
            std::cout << BLUE"*Drilling noises*" << std::endl << GREEN << this->getTarget() << " robotomization failed"RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

std::string RobotomyRequestForm::getTarget() const
{
    return _target;
}

std::string RobotomyRequestForm::getName() const
{
    return AForm::getName();
}

bool RobotomyRequestForm::getSigned() const
{
    return AForm::getSigned();
}

int RobotomyRequestForm::getGradeToSign() const
{
    return AForm::getGradeToSign();
}

int RobotomyRequestForm::getGradeToExecute() const
{
    return AForm::getGradeToExecute();
}