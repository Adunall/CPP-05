/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:11:29 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:11:30 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class AForm
{
    private:
        const std::string _name;
        bool _signed;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        AForm();
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        virtual ~AForm();

        bool beSigned(Bureaucrat &bureaucrat);

        std::string getName() const;
        bool getSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        virtual void execute(Bureaucrat const & executor) const = 0;

        class GradeTooLowToSignException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return (RED "Grade too low to sign" RESET);
                }
        };

        class GradeTooLowToExecuteException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return (RED "Grade too low to execute" RESET);
                }
        };

        class FormNotSignedException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return (RED "Form has not been signed" RESET);
                }
        };
};

std::ostream& operator<<(std::ostream&, const AForm&);