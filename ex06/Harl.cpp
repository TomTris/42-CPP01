/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 04:40:07 by qdo               #+#    #+#             */
/*   Updated: 2024/05/29 04:49:15 by qdo              ###   ########.fr       */
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
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (level == msg[i])
			break ;
	}
	if (i == 5)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
		return ;
	}
	while (i <= 3)
	{
		std::cout << "[ " << msg[i] << " ]" << std::endl;
		(this->*(ft_ptr[i++]))();
		std::cout << "" << std::endl;
	}
}

