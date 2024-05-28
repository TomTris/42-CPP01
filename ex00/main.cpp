/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 02:42:21 by qdo               #+#    #+#             */
/*   Updated: 2024/05/28 02:46:45 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
	