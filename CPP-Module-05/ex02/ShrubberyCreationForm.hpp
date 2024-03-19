/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:12:55 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:12:56 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string target);
        virtual ~ShrubberyCreationForm();

        std::string getTarget() const;
        std::string getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void execute(Bureaucrat const & executor) const;
};