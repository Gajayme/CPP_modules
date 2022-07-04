/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:39:07 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/03 17:13:20 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "Character.hpp"
# include <iostream>
# include <string>


class Cure: public AMateria
{
private:

public:
	Cure();
	Cure(const Cure & a);
	Cure & operator=(const Cure & a);
	~Cure();

	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};

#endif
