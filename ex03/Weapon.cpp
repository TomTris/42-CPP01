/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 05:33:59 by qdo               #+#    #+#             */
/*   Updated: 2024/05/28 23:31:41 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string		&Weapon::getType() {return (_type);}
void			Weapon::setType(std::string type) {_type = type;}

Weapon::Weapon(std::string type) : _type(type) {};

Weapon::~Weapon() {};