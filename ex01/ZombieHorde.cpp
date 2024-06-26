/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 04:10:25 by qdo               #+#    #+#             */
/*   Updated: 2024/05/30 20:08:00 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name)
{
	int	i;

	Zombie *horde = new Zombie[N];
	if (horde == NULL)
	{
		std::cout << "Zombie *horde failed" << std::endl;
		return (NULL);
	}
	i = 0;
	while (i < N)
		horde[i++].setName(name);
	return (horde);
}
