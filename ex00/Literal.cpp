/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:58:52 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/21 23:27:34 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
#include "Literal.hpp"

Literal::Literal(void) {}

Literal::Literal(std::string str) : _str(str) {}

Literal::Literal(Literal const &copy) {*this = copy;}

Literal::~Literal(void) {}

Literal &Literal::operator=(Literal const &copy)
{
	this->_str = copy._str;
	return (*this);
}

void Literal::printChar() const
{
	int n;
	std::istringstream iss(_str);

	iss >> n;
	if (_str == "nan" || _str == "inf" || _str == "+inf" || _str == "-inf" || _str == "nanf" || _str == "inff" || _str == "+inff" || _str == "-inff")
		std::cout << "char: impossible" << std::endl;
	else if (n < 0 || n > 127)
		std::cout << "char: impossible" << std::endl;
	else if (n < 32 || n > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
}

void Literal::printInt() const
{
	int n;

	if (_str == "nan" || _str == "inf" || _str == "+inf" || _str == "-inf" || _str == "nanf" || _str == "inff" || _str == "+inff" || _str == "-inff")
		std::cout << "int: impossible" << std::endl;
	else
	{
		n = std::stoi(_str);
		std::cout << "int: " << n << std::endl;
	}
}

void Literal::printFloat() const
{
	float n;

	n = std::stof(_str);
	if (n - static_cast<int>(n) == 0)
		std::cout << "float: " << n << ".0f" << std::endl;
	else
		std::cout << "float: " << n << "f" << std::endl;
}

void Literal::printDouble() const
{
	double n;

	n = std::stod(_str);
	if (n - static_cast<int>(n) == 0)
		std::cout << "double: " << n << ".0" << std::endl;
	else
		std::cout << "double: " << n << std::endl;
}
