/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:28:57 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/21 16:52:44 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Data.hpp"

Data::Data(std::string name, int age) : _name(name), _age(age) {}

Data::~Data(void) {}

std::string Data::getName(void) const {
	return (this->_name);
}

int Data::getAge(void) const {
	return (this->_age);
}
