/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:03:32 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:05:13 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    std::cout <<  "||||||BUREAUCRAT INSTATIATE TESTS||||||\n"  << std::endl;

    std::cout <<  "Trying to create a bureaucrat with a grade of 0:"  << std::endl;
    Bureaucrat tooHigh("TooHigh", 0);
    std::cout <<  "Trying to create a bureaucrat with a grade of 151:"  << std::endl;
    Bureaucrat tooLow("TooLow", 151);
    Bureaucrat bureaucrat_0;
    Bureaucrat bureaucrat_1("Jack", 75);

    std::cout <<  "\n||||||BUREAUCRAT TESTS||||||\n"  << std::endl;
    std::cout <<  "-----Before Decrement-----"  << std::endl;
    std::cout << "Bureaucrat name:" << bureaucrat_0.getName() << std::endl;
    std::cout << "Bureaucrat grade:"  << bureaucrat_0.getGrade() << std::endl;

    std::cout <<  "-----After Decrement-----"  << std::endl;
    bureaucrat_0.decrementGrade();
    std::cout << "Bureaucrat name:" << bureaucrat_0.getName() << std::endl;
    std::cout << "Bureaucrat grade:" << bureaucrat_0.getGrade() << std::endl;

    std::cout << "-----Before Increment-----"  << std::endl;
    std::cout << "Bureaucrat name:" << bureaucrat_1.getName() << std::endl;
    std::cout << "Bureaucrat grade:"  << bureaucrat_1.getGrade() << std::endl;

    std::cout <<  "-----After Increment-----"  << std::endl;
    bureaucrat_1.incrementGrade();
    std::cout << "Bureaucrat name:" << bureaucrat_1.getName() << std::endl;
    std::cout << "Bureaucrat grade:"  << bureaucrat_1.getGrade() << std::endl;

    std::cout <<  "\n||||||FORM TESTS||||||\n"  << std::endl;

    Form form_0;
    Form form_1("Form_1", 80, 80);

    std::cout <<  "-----Trying to sign-----"  << std::endl;
    std::cout << "Bureaucrat name:" << bureaucrat_0.getName() << std::endl;
    std::cout << "Bureaucrat grade:"  << bureaucrat_0.getGrade() << std::endl;
    bureaucrat_0.signForm(form_0);
    form_0.beSigned(bureaucrat_1);
}