/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:46:05 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/07 16:42:43 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

# define COLOR_DEFAULT "\033[0m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_YELLOW "\033[33m"
# define COLOR_UNKNOWN "\033[36m"

class MateriaSource: public IMateriaSource {

private:
	static const int	max_idx = 4;
	int					_num_learned;
	AMateria* 			_materias[max_idx];

public:
	MateriaSource();
	MateriaSource(MateriaSource const & a);
	MateriaSource & operator=(MateriaSource const & a);
	~MateriaSource();

	virtual void learnMateria(AMateria* materia);
	virtual AMateria* createMateria(std::string const & type);
};


#endif
