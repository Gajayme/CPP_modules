/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:03:44 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/13 17:43:56 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){

	std::cout<<COLOR_UNKNOWN<<"MateriaSouse"<<COLOR_DEFAULT<<" constuctor\n";
	_num_learned = 0;
	for(int i = 0; i != max_idx; ++i)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & a){

	std::cout<<COLOR_UNKNOWN<<"MateriaSouse"<<COLOR_DEFAULT<<" copy constuctor\n";
	_num_learned = a._num_learned;
	for (int i = 0; i != max_idx; ++i){
		if (a._materias[i])
			_materias[i] = a._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & a){
	std::cout<<COLOR_UNKNOWN<<"MateriaSouse"<<COLOR_DEFAULT" assignment operator\n";
	_num_learned = a._num_learned;
	for (int i = 0; i != max_idx; ++i){
		if (_materias[i])
			delete _materias[i];
		if (a._materias[i])
			_materias[i] = a._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
	return (*this);
}


MateriaSource::~MateriaSource(){

	if (!_num_learned)
		std::cout<<COLOR_UNKNOWN<<"MateriaSouse"<<COLOR_DEFAULT<<" destructor.\n";
	else
		std::cout<<COLOR_UNKNOWN<<"MateriaSouse"<<COLOR_DEFAULT<<" destructor:\n";
	for (int i = 0; i != max_idx; ++i){
		if (_materias[i])
			delete _materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* materia){

	std::cout<<"Learning...\n";
	if (_num_learned == max_idx){
		std::cout<<COLOR_RED<<"Maximum of materias learned\n"<<COLOR_DEFAULT;
		delete materia;
		return ;
	}
	for (int i = 0; i != max_idx; ++i){
		if (!_materias[i]){
			std::cout<<materia->getType()<<" materia is learded!\n";
			_materias[i] = materia;
			_num_learned += 1;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){

	if (_num_learned == 0){
		std::cout<<"There is no such a materia\n";
		return (NULL);
	}
	for (int i = 0; i != max_idx; ++i){
		if (_materias[i] && type == _materias[i]->getType())
			return(_materias[i]->clone());
	}
	std::cout<<"There is no such a materia\n";
	return(NULL);
}
