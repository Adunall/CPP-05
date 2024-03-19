/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:13:41 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:13:43 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Intern
{
    public:
        Intern();
        virtual ~Intern();

        AForm *makeForm(std::string name, std::string target);

        class FormNotFoundException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return (RED "Form not found" RESET);
                }
        };
};