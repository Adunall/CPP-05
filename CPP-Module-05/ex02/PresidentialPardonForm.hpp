/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:12:17 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:12:18 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string target);
        virtual ~PresidentialPardonForm();

        std::string getTarget() const;
        std::string getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void execute(Bureaucrat const & executor) const;
};