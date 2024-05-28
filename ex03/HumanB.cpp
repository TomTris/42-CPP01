/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 05:33:14 by qdo               #+#    #+#             */
/*   Updated: 2024/05/28 23:47:50 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
	if (_weapon == 0)
	{
		std::cout << _name << " tries to attack but no weapon" << std::endl;
	}
	else
	{
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	}
}

HumanB::HumanB(std::string name): _name(name) {_weapon = 0;}
HumanB::~HumanB()
{
	std::cout << _name << " die" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}
