/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 09:57:43 by lyubov            #+#    #+#             */
/*   Updated: 2022/07/04 17:32:43 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name){

	std::cout<<"Character constructor\n";
	_name = name;
	_num_equipped = 0;
	for (int i = 0; i != max_idx; ++i){
		_materials[i] = NULL;
	}
}

Character::Character(const Character & a){

	std::cout<<"Character copy constructor\n";
	_name = a.getName();
	_num_equipped = a._num_equipped;
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

	std::cout<<"Character assignment operator\n";
	if (this != &a){
		_name = a.getName();
		_num_equipped = a._num_equipped;
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

	std::cout<<"Character destructor\n";
	for (int i = 0; i != max_idx; ++i){
			if (_materials[i])
				delete _materials[i];
	}
}

std::string const & Character::getName() const{

	return (_name);
}

void Character::equip(AMateria* m){

	std::cout<<this->getName()<<" character equip\n";
	if (_num_equipped == max_idx) {
		std::cout<<COLOR_RED<<this->getName()<<" inventory is full :(\n"<<COLOR_DEFAULT;
		return ;
	}
	else if (m->get_is_taken()){
		std::cout<<COLOR_RED<<"Already posessed :(\n"<<COLOR_DEFAULT;
		return ;
	}
	_num_equipped += 1;
	for (int i = 0; i != max_idx; ++i){
		if (_materials[i] == NULL){
			_materials[i] = m;
			m->set_is_taken(true);
			std::cout<<COLOR_GREEN<<"Equiped :)\n"<<COLOR_DEFAULT;
			return ;
		}
	}
}

void Character::unequip(int idx){
	if (idx >= 0 && idx <= _num_equipped)
		_materials[idx] = NULL;

}

void Character::use(int idx, ICharacter& target){

	if (idx < 0 || idx >= max_idx){
		std::cout<<COLOR_RED<<this->getName()<<"Wrong slot: "<<idx<<std::endl<<COLOR_DEFAULT;
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
