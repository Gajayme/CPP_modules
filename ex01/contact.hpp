/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 23:57:27 by lyubov            #+#    #+#             */
/*   Updated: 2022/05/27 18:38:36 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact{

	public:
	Contact (){
	}
	~Contact (){
	}

	void add_data(std::string f_name, std::string l_name
	, std::string n_name, std::string p_numb, std::string d_secr);
	void print_contact();

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darckest_secret;
};

#endif
