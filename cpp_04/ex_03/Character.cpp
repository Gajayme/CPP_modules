/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 09:57:43 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/08 13:52:55 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name){

	std::cout<<COLOR_YELLOW<<"Character constructor\n"<<COLOR_DEFAULT;
	_name = name;
	_num_eq = 0;
	_materials_dropped = NULL;
	_num_dr = 0;
	for (int i = 0; i != max_idx; ++i){
		_materials[i] = NULL;
	}
}

Character::Character(const Character & a){

	std::cout<<COLOR_YELLOW<<"Character copy constructor\n"<<COLOR_DEFAULT;
	_name = a.getName();
	_num_eq = a._num_eq;
	_materials_dropped = NULL;
	_num_dr = 0;
	for (int i = 0; i != max_idx; ++i){
		if (a._materials[i]){
			_materials[i] = a._materials[i]->clone();
			_materials[i]->set_is_taken(true);
		}
		else
			_materials[i] = NULL;
	}
}

Character & Character::operator=(const Character & a){

	std::cout<<COLOR_YELLOW<<"Character assignment operator\n"<<COLOR_DEFAULT;
	if (this != &a){
		_name = a.getName();
		_num_eq = a._num_eq;
		_num_dr = 0;
		_materials_dropped = NULL;
		for (int i = 0; i != max_idx; ++i){
			if (_materials[i]){
				delete _materials[i];
				_materials[i] = NULL;
				if (a._materials[i]){
					_materials[i] = a._materials[i]->clone();
					_materials[i]->set_is_taken(true);
				}
			}
		}
	}
	return (*this);
}

Character::~Character() {

	if (!_num_eq)
		std::cout<<COLOR_YELLOW<<"Character "<<COLOR_DEFAULT<<_name<<" destructor.\n";
	else
		std::cout<<COLOR_YELLOW<<"Character "<<COLOR_DEFAULT<<_name<<" destructor:\n";
	for (int i = 0; i != max_idx; ++i){
		if (_materials[i])
			delete _materials[i];
	}
	for (int i = 0; i != _num_dr; ++i)
		delete _materials_dropped[i];
	if (_materials_dropped)
		delete [] _materials_dropped;
}

std::string const & Character::getName() const{

	return (_name);
}

void Character::equip(AMateria* m){

	if (!m){
		std::cout<<COLOR_RED<<"I cant equip nothing!\n"<<COLOR_DEFAULT;
		return ;
	}
	else if (m->get_is_taken()){
		std::cout<<COLOR_RED<<"Already posessed!\n"<<COLOR_DEFAULT;
		return ;
	}
	else if (_num_eq == max_idx) {
		std::cout<<COLOR_RED<<this->getName()<<" inventory is full!\n"<<COLOR_DEFAULT;
		delete m;
		return ;
	}
	_num_eq += 1;
	for (int i = 0; i != max_idx; ++i){
		if (_materials[i] == NULL){
			_materials[i] = m;
			m->set_is_taken(true);
			std::cout<<_name<<COLOR_GREEN<<" equiped "<<COLOR_DEFAULT<<m->getType()<<std::endl;
			return ;
		}
	}
}

void Character::unequip(int idx){


	if (idx < 0 || idx > 3 || !_materials[idx]){
		std::cout<<COLOR_RED<<"Cant't unequip at slot: "<<idx<<std::endl<<COLOR_DEFAULT;
		return ;
	}

	AMateria ** tmp = new AMateria *[_num_dr + 1];

	for(int i = 0; i != _num_dr; ++i)
		tmp[i] = _materials_dropped[i];
	tmp[_num_dr] = _materials[idx];
	_num_dr += 1;
	_num_eq -= 1;
	if (_num_dr != 0)
		delete [] _materials_dropped;
	_materials_dropped = tmp;
	std::cout<<_name<<" Unequipped: "<<_materials[idx]->getType()<<" at slot "<<idx<<std::endl<<COLOR_DEFAULT;
	_materials[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){

	if (idx < 0 || idx >= max_idx){
		std::cout<<this->getName()<<COLOR_RED<<" wrong slot: "<<idx<<std::endl<<COLOR_DEFAULT;
		return ;
	}
	else if(!_materials[idx]){
		std::cout<<COLOR_RED<<this->getName()<<" empty slot: "<<idx<<std::endl<<COLOR_DEFAULT;
		return ;
	}

	std::cout<<this->getName()<<" ";
	_materials[idx]->use(target);
}

void Character::set_name(std::string new_name){
	_name = new_name;
}
