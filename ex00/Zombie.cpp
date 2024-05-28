/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 01:50:23 by qdo               #+#    #+#             */
/*   Updated: 2024/05/28 03:56:07 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void		Zombie::announce(void)	{std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;}
std::string	Zombie::getName(void)	{return (name);}

Zombie::Zombie() 	{}
Zombie::~Zombie()	{ std::cout << name << ": die" << std::endl; }

void		Zombie::setName(std::string name_out)
{
	this->name = name_out;
	this->announce();
}
