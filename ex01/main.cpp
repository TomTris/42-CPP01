/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 04:10:41 by qdo               #+#    #+#             */
/*   Updated: 2024/05/28 05:13:23 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde1;
	Zombie *horde2;

	horde1 = zombieHorde(4, "Ooooooaaaaaaiiiiiii");
	if ( horde1 == nullptr )
	{
		std::cout << "horde1 malloc failed" << std::endl;
		return (1);
	}
	horde2 = zombieHorde(9, "A uuuuuuuuuuu");
	if (horde2 == nullptr)
	{
		std::cout << "horde1 malloc failed" << std::endl;
		delete [] horde1;
		return (1);
	}
	delete [] horde1;
	delete [] horde2;
	return (0);
}
