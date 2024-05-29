/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 04:11:41 by qdo               #+#    #+#             */
/*   Updated: 2024/05/29 04:35:11 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) { std::cout << "Harl debug message" << std::endl; }
void Harl::info(void) { std::cout << "Harl info message" << std::endl; }
void Harl::warning(void) { std::cout << "Harl warning message" << std::endl; }
void Harl::error(void) { std::cout << "Harl error message" << std::endl; }

void	Harl::complain( std::string level )
{
	void (Harl::*ft_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	if (level == "DEBUG")
		(this->*(ft_ptr[0]))();
	if (level == "INFO")
		(this->*(ft_ptr[1]))();
	if (level == "WARNING")
		(this->*(ft_ptr[2]))();
	if (level == "ERROR")
		(this->*(ft_ptr[3]))();
}

