/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +# +  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 04:24:56 by qdo               #+#    #+#             */
/*   Updated: 2024/05/26 04:25:34 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "iostream"
# include <string>

class Zombie
{

private:
	std::string	name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie (void);
	void	announce( void );
	Zombie *newZombie( std::string name );
	void	randomChump( std::string name );

	std::string	getName(void);
	void		setName(std::string name_out);
};

#endif
