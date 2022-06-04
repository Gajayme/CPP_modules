/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedd.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:59:45 by gajayme           #+#    #+#             */
/*   Updated: 2022/06/04 12:56:10 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedd.hpp"

void file_open(char *av[], std::ifstream& input, std::ofstream& output){

	std::string filename;

	filename = av[1];
	input.open(filename, std::ios::in);
	if (input.fail()){
		std::cout<<"Can't open file...\n";
		exit(1);
	}
	output.open(filename + ".replace", std::ios::out | std::ios::trunc);
}

//std::string s1, std::string s2,

void str_modify(std::string s2, size_t s1_len, std::string& str, size_t pos){
	std::string n_str;

	n_str = str.substr(0, pos);
	n_str += s2;
	n_str += str.substr(s1_len + pos);
	str = n_str;
}

void replace(char *av[], std::ifstream& input, std::ofstream& output){

	std::string str;
	std::string s1 = av[2];
	std::string s2 = av[3];
	size_t	s1_len = s1.size();
	size_t	pos;

	while(getline(input, str)){
		pos = str.find(s1);
		while (pos != std::string::npos){
			str_modify(s2, s1_len, str, pos);
			pos = str.find(s1);
		}
		output<<str<<"\n";
	}
}

int main(int ac, char *av[])
{
	std::ifstream input;
	std::ofstream output;

	if (ac != 4){
		std::cout<<"Invalid arguments\n";
		return (1);
	}

	file_open(av, input, output);
	replace(av, input, output);
	return (0);
}
