/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:18:56 by aborges           #+#    #+#             */
/*   Updated: 2025/08/04 11:23:40 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#define MIN 1
#define MAX 150

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat& value);
    Bureaucrat& operator=(const Bureaucrat& value);
    ~Bureaucrat();

    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char* what() const throw();
    };

    Bureaucrat(int grade);
    std::string getName () const;
    int         getGrade() const;
    void setIncrementGrade();
    void setDecrementGrade();
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);

#endif