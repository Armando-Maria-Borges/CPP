/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 13:22:28 by aborges           #+#    #+#             */
/*   Updated: 2025/08/08 11:01:30 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

#define MIN 1
#define MAX 150
class Bureaucrat;

class AForm
{
private:
    const std::string   name;
    bool                assin;
    const int           assinGrade;
    const int           execuGrade;
public:
    AForm();
    AForm(const AForm& value);
    AForm& operator=(const AForm& value);
    ~AForm();

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

    AForm(std::string name, bool assin, int assinGrade, int execuGrade);
    
    std::string  getName()  const;
    bool         getAssin() const;
    int          getassinGrade() const;
    int          getexecuGrade() const;

    bool         beSigned(Bureaucrat bur);
    virtual void         execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& obj);

#endif