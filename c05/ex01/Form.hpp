/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:22:28 by aborges           #+#    #+#             */
/*   Updated: 2025/08/15 12:27:37 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

#define MIN 1
#define MAX 150
class Bureaucrat;

class Form
{
private:
    const std::string   name;
    bool                assin;
    const int           assinGrade;
    const int           execuGrade;
public:
    Form();
    Form(const Form& value);
    Form& operator=(const Form& value);
    virtual ~Form();

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

    Form(std::string name, int assinGrade, int execuGrade, bool assin = false);
    std::string  getName()  const;
    bool         getAssin() const;
    int          getassinGrade() const;
    int          getexecuGrade() const;
    bool         beSigned(Bureaucrat bur);
};

std::ostream& operator<<(std::ostream& out, const Form& obj);

#endif