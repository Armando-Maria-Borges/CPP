/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborges <aborges@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:37:14 by aborges           #+#    #+#             */
/*   Updated: 2025/08/11 11:04:49 by aborges          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RRF_H
#define RRF_H
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm& value);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& value);
    ~RobotomyRequestForm();

    RobotomyRequestForm(std::string target);
    void    execute(Bureaucrat const &executor) const;
};

#endif