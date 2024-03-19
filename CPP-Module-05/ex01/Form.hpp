/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:03:20 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:03:22 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        bool _signed;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        virtual ~Form();

        bool beSigned(Bureaucrat &bureaucrat);

        std::string getName() const;
};

std::ostream& operator<<(std::ostream&, const Form&);