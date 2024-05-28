/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 05:33:18 by qdo               #+#    #+#             */
/*   Updated: 2024/05/28 23:47:47 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{

private:
	std::string _name;
	Weapon *_weapon;

public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon& weapon);
	void attack();

};

#endif
