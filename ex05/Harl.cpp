/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 04:11:41 by qdo               #+#    #+#             */
/*   Updated: 2024/05/30 20:02:38 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) { std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl; }
void Harl::info(void) { std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl; }
void Harl::warning(void) { std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl; }
void Harl::error(void) { std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl; }

void	Harl::complain( std::string level )
{
	void (Harl::*ft_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};	
	int	i = -1;
	while (++i <= 3)
		if (msg[i] == level)
			break ;
	switch (i)
	{
		case 0:
			(this->*(ft_ptr[i]))();
			return ;
		case 1:
			(this->*(ft_ptr[i]))();
			return ;
		case 2:
			(this->*(ft_ptr[i]))();
			return ;
		case 3:
			(this->*(ft_ptr[i]))();
			return ;
		default:
			std::cout << "Hmm..." << std::endl;
	}
}

