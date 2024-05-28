/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 02:42:21 by qdo               #+#    #+#             */
/*   Updated: 2024/05/28 02:51:54 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie( std::string name )
{
	Zombie *oneZombie = new Zombie[1];
	oneZombie[0].setName(name);
	return (oneZombie);
}

void		randomChump( std::string name )
{
	Zombie oneZombie;
	oneZombie.setName(name);
}

int	main(void)
{
	randomChump("random");
	Zombie *zombie1 = newZombie("qdo");
	Zombie *zombie2 = newZombie("you");
	delete [] zombie1;
	delete [] zombie2;
	return (0);
}
