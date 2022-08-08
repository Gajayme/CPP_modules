/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyubov <lyubov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:57:13 by lyubov            #+#    #+#             */
/*   Updated: 2022/08/08 14:43:00 by lyubov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Converter.hpp"
Converter::Converter(std::string orig_str): orig_str_(orig_str)
{
	prec_ = 0;
	spec_d_ = false;
	is_pos_ = true;
	Convert();
}

Converter::Converter(const Converter & other){

	orig_str_ = other.orig_str_;
	prec_ = other.prec_;
	spec_d_ = other.spec_d_;
	c_ = other.c_;
	i_ = other.i_;
	d_ = other.d_;
	f_ = other.f_;
}


Converter::~Converter(){

}

Converter & Converter::operator=(const Converter & other){

	if (this != &other){
		orig_str_ = other.orig_str_;
		spec_d_ = other.spec_d_;
		prec_ = other.prec_;
		c_ = other.c_;
		i_ = other.i_;
		d_ = other.d_;
		f_ = other.f_;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream &out, const Converter &a){

	if (a.is_pos_ && !isnan(a.d_) && (a.d_ != INFINITY) && (a.d_ != INFINITY * (-1))){
		if (std::isprint(a.i_))
			out<<"char:   "<<a.c_;
		else
			out<<"char:   Non displayable";
		out<<"\nint:    "<<a.i_;
	}
	else
		out<<"char:   impossible\nint:    impossible";

	out<<"\ndouble: "<<std::fixed<<std::setprecision(a.prec_)<<a.d_;
	if (!a.prec_ && !a.spec_d_)
		std::cout<<".0";
	out<<"\nfloat:  "<<a.f_<<"f\n"<<std::scientific;
	return (out);
}


int Converter::FindOrigType(){

	if (orig_str_.size() == 1 && !isdigit(orig_str_[0])){
		return CHAR_VAL;
	}
	if (orig_str_ == "-inff" || orig_str_ == "+inff" || orig_str_ == "inff" || orig_str_ == "nanf"){
		spec_d_ = true;
		return FLOAT_VAL;

	}

	if (orig_str_ == "-inf" || orig_str_ == "+inf" || orig_str_ == "inf" || orig_str_ == "nan"){
		spec_d_ = true;
		return DOUBLE_VAL;
	}

	for(size_t i = 0; i!= orig_str_.size(); ++i){

		if (i == 0 && (orig_str_[i] == '-' || orig_str_[i] == '+'))
			continue;
		else if (orig_str_[i] == '.')
			prec_ = orig_str_.size() - i - 1;
		else if (i == orig_str_.size() - 1 && orig_str_[i] == 'f'){
			return (FLOAT_VAL);
		}
		else if (!isdigit(orig_str_[i]) )
			return (INVALID_VAL);
	}
	if (prec_ != 0)
		return (DOUBLE_VAL);
	return INT_VAL;
}

void Converter::Convert(){

	int type = FindOrigType();

	switch (type)
	{
	case CHAR_VAL:
		//std::cout<<"char detected\n\n";
		c_ = orig_str_[0];
		i_ = static_cast<int>(c_);
		d_ =static_cast<double>(c_);
		f_ = static_cast<float>(c_);
		break;

	case INT_VAL:
		//std::cout<<"int detected\n\n";
		i_= atol(orig_str_.data());
		if (i_< INT_MIN || i_> INT_MAX)
			throw(std::overflow_error("Int overflow"));
		c_ = static_cast<char>(i_);
		d_ = static_cast<double>(i_);
		f_ = stof(orig_str_);
		//f_ = static_cast<float>(i_);
		break;

	case DOUBLE_VAL:
		//std::cout<<"double detected\n\n";
		try{
			d_ = stod(orig_str_);
		}
		catch(std::exception &e){
			throw(std::overflow_error("Double overflow"));
		}
		if ((d_ > INT_MAX || d_ <INT_MIN) && !spec_d_){
			is_pos_ = false;
		}
		c_ = static_cast<char>(d_);
		i_ = static_cast<long>(d_);
		f_ = static_cast<float>(d_);
		break;

	case FLOAT_VAL:
		prec_ -= 1;
		//std::cout<<"float detected\n\n";
		try{
			f_ = std::stof(orig_str_);
		}
		catch(std::exception &e){
			throw(std::overflow_error("Float overflow"));
		}
		if ((f_ > INT_MAX || f_ <INT_MIN) && !spec_d_){
			is_pos_ = false;
		}
		c_ = static_cast<char>(f_);
		i_ = static_cast<long>(f_);
		d_ = static_cast<double>(f_);
		break;

	default:
		throw(InvalidValue());
	//	break;
	}
}


const char * Converter::InvalidValue::what() const throw(){
	return ("Invalid_value has been passed");
}
