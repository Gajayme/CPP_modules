/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 09:37:25 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/03 17:05:01 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "Character.hpp"
# include <iostream>
# include <string>

class Ice: public AMateria
{
private:

public:
	Ice();
	Ice(const Ice & a);
	Ice & operator=(const Ice & a);
	~Ice();

	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};

#endif
