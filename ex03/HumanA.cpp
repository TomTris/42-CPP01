/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 05:33:16 by qdo               #+#    #+#             */
/*   Updated: 2024/05/28 23:42:15 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA() {std::cout << _name << ": die" << std::endl;}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	_weapon = weapon;
}
