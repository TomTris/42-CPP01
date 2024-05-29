/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 04:40:15 by qdo               #+#    #+#             */
/*   Updated: 2024/05/29 04:40:16 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>
#include <iostream>
#include <functional>

class Harl
{

public:
	typedef void (Harl::*MemberFunction) (void);
	void	complain( std::string level );

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};


#endif
