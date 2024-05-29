/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 04:43:59 by qdo               #+#    #+#             */
/*   Updated: 2024/05/29 04:50:34 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "[ Harl is ... ]" << std::endl;
		return (0);
	}
	if (ac > 2)
	{
		std::cout << "[ Harl should not complain too many things at once ]" << std::endl;
		return (0);
	}
	Harl a;
	a.complain((std::string) av[1]);
}
