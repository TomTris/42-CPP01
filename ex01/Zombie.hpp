/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 04:10:44 by qdo               #+#    #+#             */
/*   Updated: 2024/05/28 05:14:40 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "iostream"
# include <string>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	~Zombie();
	std::string getName(void);
	void		setName(std::string nameOutside);
};

Zombie *zombieHorde( int N, std::string name);

#endif
