/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 09:53:06 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/04 17:25:40 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class Character: public ICharacter
{
private:

	static const int	max_idx = 4;

	std::string			_name;
	int					_num_equipped;
	AMateria *			_materials[max_idx];

public:
	Character(std::string name = "default");
	Character(Character const & a);
	Character & operator=(Character const & a);
	virtual ~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	void set_name(std::string new_name);
};

#endif
