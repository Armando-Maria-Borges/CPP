/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:37:14 by aborges           #+#    #+#             */
/*   Updated: 2025/08/08 10:33:27 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RRF_H
#define RRF_H
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm& value);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& value);
    ~RobotomyRequestForm();

    RobotomyRequestForm(std::string target);
    void    RobotomyRequestForm::execute(Bureaucrat const &executor) const;
};

#endif