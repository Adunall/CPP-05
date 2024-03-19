/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:13:35 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:13:37 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

AForm * Intern::makeForm(std::string name, std::string target)
{
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm *formPtr = NULL;

    AForm *forms[3] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };

    try
    {
        for (int i = 0; i < 3; i++)
        {
            if (name == formNames[i])
            {
                formPtr = forms[i];
                std::cout << "Intern creates " << formPtr->getName() << std::endl;
                break;
            }
            else if (i == 2)
                throw Intern::FormNotFoundException();
        }
        return formPtr;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return NULL;
    }
}