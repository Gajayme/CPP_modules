/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:03:44 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/04 18:08:25 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){

	std::cout<<"MateriaSouse constuctor\n";
	for(int i = 0; i != max_idx; ++i)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & a){

}

MateriaSource & MateriaSource::operator=(MateriaSource const & a){

}

MateriaSource::~MateriaSource(){

}

void MateriaSource::learnMateria(AMateria*){

}

AMateria* MateriaSource::createMateria(std::string const & type){

}
