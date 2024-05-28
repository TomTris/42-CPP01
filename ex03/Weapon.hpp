/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 05:33:20 by qdo               #+#    #+#             */
/*   Updated: 2024/05/28 23:31:10 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
# include <string>

class Weapon
{

private:
	std::string _type;

public:
	Weapon(std::string type);
	~Weapon();
	std::string&	getType();
	void			setType(std::string type);
};

#endif
