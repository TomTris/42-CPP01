/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 04:10:37 by qdo               #+#    #+#             */
/*   Updated: 2024/05/28 05:17:46 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string Zombie::getName(void) {return name;}
Zombie::Zombie() {}
Zombie::~Zombie()
{
	std::cout << name << ": die" << std::endl;	
}

void	Zombie::setName(std::string nameOutside)
{
	name = nameOutside;
	std::cout << name << ": is born" << std::endl;
}
