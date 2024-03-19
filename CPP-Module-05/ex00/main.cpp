/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:48:51 by adunal            #+#    #+#             */
/*   Updated: 2024/03/19 16:48:54 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat bureaucrat_1;

    Bureaucrat bureaucrat_2("Kocaeli",1000);
    bureaucrat_1.IncrementGrade(2);
    std::cout << "Bureaucrat (1) name:" << bureaucrat_1.getName() << std::endl;
    std::cout << "Bureaucrat (1) grade:" << bureaucrat_1.getGrade() << std::endl;

    std::cout << "Bureaucrat (2) name:" << bureaucrat_2.getName() << std::endl;
    std::cout << "Bureaucrat (2) grade:" << bureaucrat_2.getGrade() << std::endl;
}