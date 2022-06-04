/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 11:15:37 by lyubov            #+#    #+#             */
/*   Updated: 2022/06/04 12:48:56 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	std::string lvl_arr[4];
	void (Harl::* funcs[4]) (void);
	//void (Harl::* func_to_call) (void);

public:
	Harl();
	~Harl();
	void complain( std::string level );
};

#endif
