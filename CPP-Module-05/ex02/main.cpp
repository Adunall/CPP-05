/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:11:59 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 17:12:01 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    std::cout << GREEN "||||||BUREAUCRAT INSTATIATE TESTS||||||\n" RESET << std::endl;

    std::cout << MAGENTA "Trying to create a bureaucrat with a grade of 0:" RESET << std::endl;
    Bureaucrat tooHigh("TooHigh", 0);
    std::cout << MAGENTA "Trying to create a bureaucrat with a grade of 151:" RESET << std::endl;
    Bureaucrat tooLow("TooLow", 151);
    Bureaucrat bureaucrat_0;
    Bureaucrat bureaucrat_1("Jack", 75);

    std::cout << GREEN "\n||||||BUREAUCRAT TESTS||||||\n" RESET << std::endl;
    std::cout << MAGENTA "-----Before Decrement-----" RESET << std::endl;
    std::cout << "Bureaucrat name:" << bureaucrat_0.getName() << std::endl;
    std::cout << "Bureaucrat grade:" GREEN << bureaucrat_0.getGrade() << std::endl;

    std::cout << MAGENTA "-----After Decrement-----" RESET << std::endl;
    bureaucrat_0.decrementGrade();
    std::cout << "Bureaucrat name:" << bureaucrat_0.getName() << std::endl;
    std::cout << "Bureaucrat grade:" GREEN << bureaucrat_0.getGrade() << std::endl;

    std::cout << MAGENTA "-----Before Increment-----" RESET << std::endl;
    std::cout << "Bureaucrat name:" << bureaucrat_1.getName() << std::endl;
    std::cout << "Bureaucrat grade:" GREEN << bureaucrat_1.getGrade() << std::endl;

    std::cout << MAGENTA "-----After Increment-----" RESET << std::endl;
    bureaucrat_1.incrementGrade();
    std::cout << "Bureaucrat name:" << bureaucrat_1.getName() << std::endl;
    std::cout << "Bureaucrat grade:" GREEN << bureaucrat_1.getGrade() << std::endl;

    std::cout << GREEN "\n||||||ShrubberyCreationForm TESTS||||||\n" RESET << std::endl;

    Bureaucrat bureaucrat_4("Elise", 75);
    Bureaucrat bureaucrat_5("Paul", 140);
    Bureaucrat bureaucrat_6("John", 150);
    ShrubberyCreationForm SC_form_1("Home");

    std::cout << MAGENTA "-----Trying to Sign & Execute-----" RESET << std::endl;
    std::cout << "Form name:" << CYAN << SC_form_1.getName() << RESET << std::endl;
    std::cout << "Form grade to sign:" << YELLOW << SC_form_1.getGradeToSign() << RESET << std::endl;
    std::cout << "Form grade to execute:" << YELLOW << SC_form_1.getGradeToExecute() << RESET << std::endl;
    std::cout << "Bureaucrat name:" << CYAN << bureaucrat_4.getName() << RESET << std::endl;
    std::cout << "Bureaucrat grade:" << YELLOW << bureaucrat_4.getGrade() << RESET << std::endl;
    SC_form_1.beSigned(bureaucrat_4);
    SC_form_1.execute(bureaucrat_4);
    std::cout << MAGENTA "-----Trying to Sign & Execute-----" RESET << std::endl;
    std::cout << "Form name:" << CYAN << SC_form_1.getName() << RESET << std::endl;
    std::cout << "Form grade to sign:" << YELLOW << SC_form_1.getGradeToSign() << RESET << std::endl;
    std::cout << "Form grade to execute:" << YELLOW << SC_form_1.getGradeToExecute() << RESET << std::endl;
    std::cout << "Bureaucrat name:" << CYAN << bureaucrat_5.getName() << RESET << std::endl;
    std::cout << "Bureaucrat grade:" << YELLOW << bureaucrat_5.getGrade() << RESET << std::endl;
    SC_form_1.beSigned(bureaucrat_5);
    SC_form_1.execute(bureaucrat_5);
    std::cout << MAGENTA "-----Trying to Sign & Execute-----" RESET << std::endl;
    std::cout << "Form name:" << CYAN << SC_form_1.getName() << RESET << std::endl;
    std::cout << "Form grade to sign:" << YELLOW << SC_form_1.getGradeToSign() << RESET << std::endl;
    std::cout << "Form grade to execute:" << YELLOW << SC_form_1.getGradeToExecute() << RESET << std::endl;
    std::cout << "Bureaucrat name:" << CYAN << bureaucrat_6.getName() << RESET << std::endl;
    std::cout << "Bureaucrat grade:" << YELLOW << bureaucrat_6.getGrade() << RESET << std::endl;
    SC_form_1.beSigned(bureaucrat_6);
    SC_form_1.execute(bureaucrat_6);

    std::cout << GREEN "\n||||||RobotomyRequestForm TESTS||||||\n" RESET << std::endl;

    Bureaucrat bureaucrat_7("Elise", 35);
    Bureaucrat bureaucrat_8("Paul", 65);
    Bureaucrat bureaucrat_9("John", 150);
    RobotomyRequestForm RR_form_1("Home");

    std::cout << MAGENTA "-----Trying to Sign & Execute-----" RESET << std::endl;
    std::cout << "Form name:" << CYAN << RR_form_1.getName() << RESET << std::endl;
    std::cout << "Form grade to sign:" << YELLOW << RR_form_1.getGradeToSign() << RESET << std::endl;
    std::cout << "Form grade to execute:" << YELLOW << RR_form_1.getGradeToExecute() << RESET << std::endl;
    std::cout << "Bureaucrat name:" << CYAN << bureaucrat_7.getName() << RESET << std::endl;
    std::cout << "Bureaucrat grade:" << YELLOW << bureaucrat_7.getGrade() << RESET << std::endl;
    RR_form_1.beSigned(bureaucrat_7);
    RR_form_1.execute(bureaucrat_7);
    std::cout << MAGENTA "-----Trying to Sign & Execute-----" RESET << std::endl;
    std::cout << "Form name:" << CYAN << RR_form_1.getName() << RESET << std::endl;
    std::cout << "Form grade to sign:" << YELLOW << RR_form_1.getGradeToSign() << RESET << std::endl;
    std::cout << "Form grade to execute:" << YELLOW << RR_form_1.getGradeToExecute() << RESET << std::endl;
    std::cout << "Bureaucrat name:" << CYAN << bureaucrat_8.getName() << RESET << std::endl;
    std::cout << "Bureaucrat grade:" << YELLOW << bureaucrat_8.getGrade() << RESET << std::endl;
    RR_form_1.beSigned(bureaucrat_8);
    RR_form_1.execute(bureaucrat_8);
    std::cout << MAGENTA "-----Trying to Sign & Execute-----" RESET << std::endl;
    std::cout << "Form name:" << CYAN << RR_form_1.getName() << RESET << std::endl;
    std::cout << "Form grade to sign:" << YELLOW << RR_form_1.getGradeToSign() << RESET << std::endl;
    std::cout << "Form grade to execute:" << YELLOW << RR_form_1.getGradeToExecute() << RESET << std::endl;
    std::cout << "Bureaucrat name:" << CYAN << bureaucrat_9.getName() << RESET << std::endl;
    std::cout << "Bureaucrat grade:" << YELLOW << bureaucrat_9.getGrade() << RESET << std::endl;
    RR_form_1.beSigned(bureaucrat_9);
    RR_form_1.execute(bureaucrat_9);

    std::cout << GREEN "\n||||||PresidentialPardonForm TESTS||||||\n" RESET << std::endl;

    Bureaucrat bureaucrat_10("Elise", 5);
    Bureaucrat bureaucrat_11("Paul", 20);
    Bureaucrat bureaucrat_12("John", 150);
    PresidentialPardonForm PP_form_1("Home");

    std::cout << MAGENTA "-----Trying to Sign & Execute-----" RESET << std::endl;
    std::cout << "Form name:" << CYAN << PP_form_1.getName() << RESET << std::endl;
    std::cout << "Form grade to sign:" << YELLOW << PP_form_1.getGradeToSign() << RESET << std::endl;
    std::cout << "Form grade to execute:" << YELLOW << PP_form_1.getGradeToExecute() << RESET << std::endl;
    std::cout << "Bureaucrat name:" << CYAN << bureaucrat_10.getName() << RESET << std::endl;
    std::cout << "Bureaucrat grade:" << YELLOW << bureaucrat_10.getGrade() << RESET << std::endl;
    PP_form_1.beSigned(bureaucrat_10);
    PP_form_1.execute(bureaucrat_10);
    std::cout << MAGENTA "-----Trying to Sign & Execute-----" RESET << std::endl;
    std::cout << "Form name:" << CYAN << PP_form_1.getName() << RESET << std::endl;
    std::cout << "Form grade to sign:" << YELLOW << PP_form_1.getGradeToSign() << RESET << std::endl;
    std::cout << "Form grade to execute:" << YELLOW << PP_form_1.getGradeToExecute() << RESET << std::endl;
    std::cout << "Bureaucrat name:" << CYAN << bureaucrat_11.getName() << RESET << std::endl;
    std::cout << "Bureaucrat grade:" << YELLOW << bureaucrat_11.getGrade() << RESET << std::endl;
    PP_form_1.beSigned(bureaucrat_11);
    PP_form_1.execute(bureaucrat_11);
    std::cout << MAGENTA "-----Trying to Sign & Execute-----" RESET << std::endl;
    std::cout << "Form name:" << CYAN << PP_form_1.getName() << RESET << std::endl;
    std::cout << "Form grade to sign:" << YELLOW << PP_form_1.getGradeToSign() << RESET << std::endl;
    std::cout << "Form grade to execute:" << YELLOW << PP_form_1.getGradeToExecute() << RESET << std::endl;
    std::cout << "Bureaucrat name:" << CYAN << bureaucrat_12.getName() << RESET << std::endl;
    std::cout << "Bureaucrat grade:" << YELLOW << bureaucrat_12.getGrade() << RESET << std::endl;
    PP_form_1.beSigned(bureaucrat_12);
    PP_form_1.execute(bureaucrat_12);

    return (0);
}