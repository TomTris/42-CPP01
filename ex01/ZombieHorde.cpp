/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 04:10:25 by qdo               #+#    #+#             */
/*   Updated: 2024/05/28 05:13:39 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name)
{
	int	i;

	Zombie *horde = new Zombie[N];
	if (horde == nullptr)
	{
		std::cout << "Zombie *horde failed" << std::endl;
		return (nullptr);
	}
	i = 0;
	while (i < N)
		horde[i++].setName(name);
	return (horde);
}
