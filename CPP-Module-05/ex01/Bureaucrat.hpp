/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:02:58 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:07:29 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

class Form;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        virtual ~Bureaucrat();

        void incrementGrade(void);
        void decrementGrade(void);
        void signForm(Form &form);

        std::string getName() const;
        int getGrade() const;
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return (RED "Grade too high" RESET);
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return (GREEN "Grade too low" RESET);
                }
        };
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

void checkGrade(int grade);